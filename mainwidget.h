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
    //��ҳ��ť
    void on_pushButtonClose_clicked(bool);
    void on_pushButtonToPage_1_clicked(bool);
    void on_pushButtonToPage_2_clicked(bool);
    void on_pushButtonToPage_3_clicked(bool);
    void on_pushButtonToPage_4_clicked(bool);
    void on_pushButtonToPage_5_clicked(bool);
    void on_pushButtonToPage_6_clicked(bool);
    void on_pushButtonToPage_7_clicked(bool);

    //��һҳ
    void on_pushButtonReturnHomePage_1_clicked(bool);
    void on_pushButtonOneKeyStart_clicked(bool);
    void on_pushButtonOneKeyClose_clicked(bool);
    void on_pushButtonAddProcessInfo_clicked(bool);
    void on_pushButtonDeleteProcessInfo_clicked(bool);

    //�ڶ�ҳ
    void on_pushButtonReturnHomePage_2_clicked(bool);

    //����ҳ
    void on_pushButtonReturnHomePage_3_clicked(bool);

    //����ҳ
    void on_pushButtonReturnHomePage_4_clicked(bool);

    //����ҳ
    void on_pushButtonReturnHomePage_5_clicked(bool);

    //����ҳ
    void on_pushButtonReturnHomePage_6_clicked(bool);

    //����ҳ
    void on_pushButtonReturnHomePage_7_clicked(bool);





private:
    Ui::MainWidget *ui;
    QVector<QProcess*> vecProc;
};

#endif // MAINWIDGET_H
