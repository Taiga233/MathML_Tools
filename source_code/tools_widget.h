/**********************************************
*  File:   tool_widget.h
*  Author: Taiga233
*  Email:  TaigaAhri@gmail.com
*  Time:   2023-5-15 23：54
**********************************************/
#ifndef TOOLS_WIDGET_H
#define TOOLS_WIDGET_H

#include <QFileDialog>
#include "qtmmlwidget.h"

namespace Ui {
class Tools_Widget;
}

class Tools_Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Tools_Widget(QWidget *parent = 0);
    ~Tools_Widget();

    void open_file_set_content(const QString& path);

private slots:

    void on_pushButton_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_lineEdit_editingFinished();

    void on_pushButton_2_clicked();

    void on_textEdit_textChanged();

private:
    uint formula_font_size;
    QtMmlWidget *Math_ML;
    QString MathML_path;
    QString MathML_content;
    bool text_edit_change_flag;

    Ui::Tools_Widget *ui;
};

#endif // TOOLS_WIDGET_H
//MathML Referance:https://developer.mozilla.org/en-US/docs/Web/MathML
