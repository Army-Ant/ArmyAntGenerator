#include "../inc/generatormainwin.h"
#include <ui_generatormainwin.h>

GeneratorMainWin::GeneratorMainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GeneratorMainWin)
{
    ui->setupUi(this);
}

GeneratorMainWin::~GeneratorMainWin()
{
    delete ui;
}
