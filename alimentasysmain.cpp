#include "alimentasysmain.h"
#include "./ui_alimentasysmain.h"

AlimentaSysMain::AlimentaSysMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AlimentaSysMain)
{
    ui->setupUi(this);
}

AlimentaSysMain::~AlimentaSysMain()
{
    delete ui;
}
