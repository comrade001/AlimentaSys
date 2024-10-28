#include "user.h"

User::User(const QString &firstName, const QString &lastNamePaternal, const QString &lastNameMaternal,
           const QString &employeeId, const QString &cardNumber)
    : firstName(firstName), lastNamePaternal(lastNamePaternal), lastNameMaternal(lastNameMaternal),
    employeeId(employeeId), cardNumber(cardNumber) {}

QString User::getFirstName() const { return firstName; }
QString User::getLastNamePaternal() const { return lastNamePaternal; }
QString User::getLastNameMaternal() const { return lastNameMaternal; }
QString User::getEmployeeId() const { return employeeId; }
QString User::getCardNumber() const { return cardNumber; }

void User::setFirstName(const QString &firstName) { this->firstName = firstName; }
void User::setLastNamePaternal(const QString &lastNamePaternal) { this->lastNamePaternal = lastNamePaternal; }
void User::setLastNameMaternal(const QString &lastNameMaternal) { this->lastNameMaternal = lastNameMaternal; }
void User::setEmployeeId(const QString &employeeId) { this->employeeId = employeeId; }
void User::setCardNumber(const QString &cardNumber) { this->cardNumber = cardNumber; }
