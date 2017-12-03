#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    this->setWindowTitle(QStringLiteral("调试助手"));
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->stackedWidget->setCurrentWidget(ui->page);
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::InitAssistant()
{
    ui->stackedWidget->setCurrentWidget(ui->page);
}

void MainWidget::on_pushButtonClose_clicked(bool)
{
    this->close();
}

void MainWidget::on_pushButtonReturnHomePage_1_clicked(bool)
{
    ui->stackedWidget->setCurrentWidget(ui->page);
}

void MainWidget::on_pushButtonReturnHomePage_2_clicked(bool)
{
    ui->stackedWidget->setCurrentWidget(ui->page);
}

void MainWidget::on_pushButtonReturnHomePage_3_clicked(bool)
{
    ui->stackedWidget->setCurrentWidget(ui->page);
}

void MainWidget::on_pushButtonReturnHomePage_4_clicked(bool)
{
    ui->stackedWidget->setCurrentWidget(ui->page);
}

void MainWidget::on_pushButtonReturnHomePage_5_clicked(bool)
{
    ui->stackedWidget->setCurrentWidget(ui->page);
}

void MainWidget::on_pushButtonReturnHomePage_6_clicked(bool)
{
    ui->stackedWidget->setCurrentWidget(ui->page);
}

void MainWidget::on_pushButtonReturnHomePage_7_clicked(bool)
{
    ui->stackedWidget->setCurrentWidget(ui->page);
}

void MainWidget::on_pushButtonOneKeyStart_clicked(bool)
{
    QString strCmd;
    QProcess *proc;
    for (int i=0; i<ui->tableWidget_1->rowCount(); i++)
    {
        strCmd.clear();
        strCmd = QString("%1 %2")
                .arg(ui->tableWidget_1->item(i,1)->text())
                .arg(ui->tableWidget_1->item(i,2)->text());
        proc = new QProcess();
        proc->start(strCmd);
        vecProc.push_back(proc);
    }
}

void MainWidget::on_pushButtonToPage_1_clicked(bool)
{
    ui->stackedWidget->setCurrentWidget(ui->page_1);
}

void MainWidget::on_pushButtonToPage_2_clicked(bool)
{
    ui->stackedWidget->setCurrentWidget(ui->page_2);
}

void MainWidget::on_pushButtonToPage_3_clicked(bool)
{
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}

void MainWidget::on_pushButtonToPage_4_clicked(bool)
{
    ui->stackedWidget->setCurrentWidget(ui->page_4);
}

void MainWidget::on_pushButtonToPage_5_clicked(bool)
{
    ui->stackedWidget->setCurrentWidget(ui->page_5);
}

void MainWidget::on_pushButtonToPage_6_clicked(bool)
{
    ui->stackedWidget->setCurrentWidget(ui->page_6);
}

void MainWidget::on_pushButtonToPage_7_clicked(bool)
{
    ui->stackedWidget->setCurrentWidget(ui->page_7);
}

void MainWidget::on_pushButtonAddProcessInfo_clicked(bool)
{
    ui->tableWidget_1->insertRow(ui->tableWidget_1->rowCount());
}

void MainWidget::on_pushButtonDeleteProcessInfo_clicked(bool)
{
    ui->tableWidget_1->removeRow(ui->tableWidget_1->currentRow());
}

void MainWidget::on_pushButtonOneKeyClose_clicked(bool)
{
    for (int i=0; i<vecProc.count(); i++)
    {
//        vecProc.value(i)->close();//直接关闭，未进行析构？
//        vecProc.value(i)->kill();//同上
        vecProc.value(i)->terminate();//析构后关闭
    }
    vecProc.clear();
}
