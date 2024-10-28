#ifndef USER_H
#define USER_H

#include <QString>

class User {
public:
    User(const QString &firstName, const QString &lastNamePaternal, const QString &lastNameMaternal,
         const QString &employeeId, const QString &cardNumber);

    // Getters
    QString getFirstName() const;
    QString getLastNamePaternal() const;
    QString getLastNameMaternal() const;
    QString getEmployeeId() const;
    QString getCardNumber() const;

    // Setters
    void setFirstName(const QString &firstName);
    void setLastNamePaternal(const QString &lastNamePaternal);
    void setLastNameMaternal(const QString &lastNameMaternal);
    void setEmployeeId(const QString &employeeId);
    void setCardNumber(const QString &cardNumber);

private:
    QString firstName;
    QString lastNamePaternal;
    QString lastNameMaternal;
    QString employeeId;
    QString cardNumber;
};

#endif // USER_H
