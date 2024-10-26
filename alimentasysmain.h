#ifndef ALIMENTASYSMAIN_H
#define ALIMENTASYSMAIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class AlimentaSysMain;
}
QT_END_NAMESPACE

class AlimentaSysMain : public QMainWindow
{
    Q_OBJECT

public:
    AlimentaSysMain(QWidget *parent = nullptr);
    ~AlimentaSysMain();

private:
    Ui::AlimentaSysMain *ui;
};
#endif // ALIMENTASYSMAIN_H
