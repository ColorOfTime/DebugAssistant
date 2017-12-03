#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <iostream>
#include <QDebug>
#include <QByteArray>
#include <QProcess>
#include <QVector>

using namespace std;

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();
    void InitAssistant();

private slots:
    //首页按钮
    void on_pushButtonClose_clicked(bool);
    void on_pushButtonToPage_1_clicked(bool);
    void on_pushButtonToPage_2_clicked(bool);
    void on_pushButtonToPage_3_clicked(bool);
    void on_pushButtonToPage_4_clicked(bool);
    void on_pushButtonToPage_5_clicked(bool);
    void on_pushButtonToPage_6_clicked(bool);
    void on_pushButtonToPage_7_clicked(bool);

    //第一页
    void on_pushButtonReturnHomePage_1_clicked(bool);
    void on_pushButtonOneKeyStart_clicked(bool);
    void on_pushButtonOneKeyClose_clicked(bool);
    void on_pushButtonAddProcessInfo_clicked(bool);
    void on_pushButtonDeleteProcessInfo_clicked(bool);

    //第二页
    void on_pushButtonReturnHomePage_2_clicked(bool);

    //第三页
    void on_pushButtonReturnHomePage_3_clicked(bool);

    //第四页
    void on_pushButtonReturnHomePage_4_clicked(bool);

    //第五页
    void on_pushButtonReturnHomePage_5_clicked(bool);

    //第六页
    void on_pushButtonReturnHomePage_6_clicked(bool);

    //第七页
    void on_pushButtonReturnHomePage_7_clicked(bool);





private:
    Ui::MainWidget *ui;
    QVector<QProcess*> vecProc;
};

#endif // MAINWIDGET_H
