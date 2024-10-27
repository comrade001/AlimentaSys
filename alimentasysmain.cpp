#include "alimentasysmain.h"
#include "ui/usermanagement.h"
#include "./ui_alimentasysmain.h"
#include <QMdiSubWindow>

AlimentaSysMain::AlimentaSysMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AlimentaSysMain),
    mdiArea(new QMdiArea(this))
{
    ui->setupUi(this);
    setCentralWidget(mdiArea);  // Establece mdiArea como el widget central
}

AlimentaSysMain::~AlimentaSysMain()
{
    delete ui;
}

// Implementación de los métodos para abrir subventanas
void AlimentaSysMain::openUserManagement() {
    UserManagement *userWindow = new UserManagement(this);
    mdiArea->addSubWindow(userWindow);
    userWindow->show();
}

void AlimentaSysMain::on_actionUser_Management_triggered()
{
    openUserManagement();  // Llama a la función que abre el formulario de usuarios
}

