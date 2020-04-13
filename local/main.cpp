#include "mainlocal.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainLocal w;
    w.show();

    return a.exec();
}
