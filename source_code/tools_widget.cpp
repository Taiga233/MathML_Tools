/**********************************************
*  File:   tool_widget.cpp
*  Author: Taiga233
*  Email:  TaigaAhri@gmail.com
*  Time:   2023-5-15 23：54
**********************************************/
#include "tools_widget.h"
#include "ui_tools_widget.h"

Tools_Widget::Tools_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tools_Widget)
{
    Math_ML = new QtMmlWidget;
    MathML_path.clear();
    MathML_content.clear();
    text_edit_change_flag = false;

    ui->setupUi(this);

    ui->label_3->hide();
    formula_font_size = ui->spinBox->value();
    ui->lineEdit->setPlaceholderText(
                QString("Input xml file path, press 'Enter' end."));
    ui->textEdit->setPlaceholderText(
                QString("or:\nYou can input MathML-format word at here.\
                            \nPlease using the MathML language."));
    ui->label_3->setWordWrap(true);
    ui->pushButton_2->setEnabled(false);
}

Tools_Widget::~Tools_Widget()
{
    delete Math_ML;
    delete ui;
}

void Tools_Widget::open_file_set_content(const QString &path)
{
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly)) {
        ui->label_3->setText(QString("Open file error!"));
        ui->label_3->setHidden(false);
        text_edit_change_flag = false;
        ui->pushButton_2->setEnabled(false);
        return ;
    }
    QTextStream stream(&file);
    //stream.setEncoding(QTextStream::UnicodeUTF8);
    MathML_content = stream.readAll();
    file.close();

    ui->textEdit->setText(MathML_content);
    text_edit_change_flag = false;
    ui->pushButton_2->setEnabled(true);
    ui->label_3->setHidden(true);
}

//open xml file and set edit content
void Tools_Widget::on_pushButton_clicked()
{
    QString file_path = QFileDialog::getOpenFileName(this, tr("Open File"),
                            "", tr("XML files (*.xml);;All files (*.*)"));
//    qDebug() << "file_name" << file_name;
    if (file_path.isEmpty()) {
        ui->label_3->setText(QString("File path empty!"));
        ui->label_3->setHidden(false);
        ui->pushButton_2->setEnabled(false);
        return ;
    }
    MathML_path = file_path;
    ui->lineEdit->setText(file_path);

    //open and read file, set edit content
    open_file_set_content(MathML_path);
}

void Tools_Widget::on_spinBox_valueChanged(int arg1)
{
    formula_font_size = (uint)arg1;
}

//responding when press 'Enter' or line edit lost focus
void Tools_Widget::on_lineEdit_editingFinished()
{
    if (ui->lineEdit->text().isEmpty()) {
        ui->label_3->setText(QString("File path empty!"));
        ui->label_3->setHidden(false);
        ui->pushButton_2->setEnabled(false);
        return ;
    }
    if (MathML_path == ui->lineEdit->text()) {
        return ; //This denotes that line edit has not been changed.
    }
    MathML_path = ui->lineEdit->text();
    ui->textEdit->clear();

    //open and read file, set edit content
    open_file_set_content(MathML_path);
}

//show formula
void Tools_Widget::on_pushButton_2_clicked()
{
//    qDebug() << "text_edit_change_flag" << text_edit_change_flag;
    ui->label_3->hide();
    Math_ML->clear();
    if(text_edit_change_flag) {
        MathML_content = ui->textEdit->toPlainText();
    }
    QString error_msg;
    int error_line, error_column;
    bool result;
    result = Math_ML->setContent(MathML_content, &error_msg, &error_line, &error_column);
    if (result) {
        Math_ML->setBaseFontPointSize(formula_font_size);
        Math_ML->show();
    } else {
        qDebug() << "show error! " << "setContent result: " << result;
        ui->label_3->setText(QString("Parse error at line %1 column %2.\nError message:").arg(error_line).arg(error_column) + error_msg);
        ui->label_3->setHidden(false);
    }

    text_edit_change_flag = false;
}

void Tools_Widget::on_textEdit_textChanged()
{
//    qDebug() << "text edit: text changed";
    text_edit_change_flag = true;
}
