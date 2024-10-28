#include "usermanagement.h"
#include "ui_usermanagement.h"
#include "../models/user.h"
#include "../database/databasemanager.h"
#include <QMessageBox>

UserManagement::UserManagement(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserManagement)
{
    ui->setupUi(this);
}

UserManagement::~UserManagement()
{
    delete ui;
}

void UserManagement::on_btnAddUser_clicked()
{
    QString firstName = ui->txtFirstName->text();
    QString lastNamePaternal = ui->txtLastNamePaternal->text();
    QString lastNameMaternal = ui->txtLastNameMaternal->text();
    QString employeeId = ui->txtEmployeeId->text();
    QString cardNumber = ui->txtCardNumber->text();

    User user(firstName, lastNamePaternal, lastNameMaternal, employeeId, cardNumber);

    if (DatabaseManager::instance().addUser(user)) {
        QMessageBox::information(this, "Success", "User added successfully.");
        clearForm();  // Método para limpiar el formulario después de agregar el usuario
    } else {
        QMessageBox::warning(this, "Error", "Failed to add user.");
    }
}

void UserManagement::clearForm() {
    ui->txtFirstName->clear();
    ui->txtLastNamePaternal->clear();
    ui->txtLastNameMaternal->clear();
    ui->txtEmployeeId->clear();
    ui->txtCardNumber->clear();
}

