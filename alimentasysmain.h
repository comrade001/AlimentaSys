#ifndef ALIMENTASYSMAIN_H
#define ALIMENTASYSMAIN_H

#include <QMainWindow>
#include <QMdiArea>

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

    void openUserManagement();

private slots:
    void on_actionUser_Management_triggered();

private:
    Ui::AlimentaSysMain *ui;
    QMdiArea *mdiArea;  // Declara mdiArea como puntero
};
#endif // ALIMENTASYSMAIN_H
