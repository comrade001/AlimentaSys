#ifndef USERMANAGEMENT_H
#define USERMANAGEMENT_H

#include <QWidget>

namespace Ui {
class UserManagement;
}

class UserManagement : public QWidget
{
    Q_OBJECT

public:
    explicit UserManagement(QWidget *parent = nullptr);
    ~UserManagement();

private slots:
    void on_btnAddUser_clicked();

private:
    Ui::UserManagement *ui;
    void clearForm();  // Declaración del método
};

#endif // USERMANAGEMENT_H
