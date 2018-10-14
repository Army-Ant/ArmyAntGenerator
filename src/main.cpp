#include "../inc/generatormainwin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GeneratorMainWin w;
    w.show();

    return a.exec();
}
