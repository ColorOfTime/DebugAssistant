#include "mainwidget.h"
#include <QApplication>

int main(int argc, char *argv[])//主函数
{
    QApplication a(argc, argv);
    MainWidget w;
#if 1
    w.move(0,440);//中间底部
#else
    w.move(0,0);
#endif
    w.setWindowFlags(w.windowFlags() | Qt::WindowStaysOnTopHint);
    w.setAttribute(Qt::WA_TranslucentBackground);
    w.show();

    return a.exec();
}
