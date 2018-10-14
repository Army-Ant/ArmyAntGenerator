#ifndef GENERATORMAINWIN_H
#define GENERATORMAINWIN_H

#include <QMainWindow>

namespace Ui {
class GeneratorMainWin;
}

class GeneratorMainWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit GeneratorMainWin(QWidget *parent = nullptr);
    ~GeneratorMainWin();

private:
    Ui::GeneratorMainWin *ui;
};

#endif // GENERATORMAINWIN_H
