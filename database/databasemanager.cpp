#include "databasemanager.h"
#include "../models/user.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

DatabaseManager::DatabaseManager() {
    db = QSqlDatabase::addDatabase("QSQLITE");
    if (!QSqlDatabase::isDriverAvailable("QSQLITE")) {
        qDebug() << "QSQLITE driver not available!";
    } else {
        qDebug() << "QSQLITE driver is available.";
    }
}

// Implementación del método singleton
DatabaseManager& DatabaseManager::instance() {
    static DatabaseManager instance;
    return instance;
}

bool DatabaseManager::addUser(const User &user) {
    QSqlQuery query(db);
    query.prepare("INSERT INTO Users (first_name, last_name_paternal, last_name_maternal, employee_id, card_number) "
                  "VALUES (:first_name, :last_name_paternal, :last_name_maternal, :employee_id, :card_number)");

    query.bindValue(":first_name", user.getFirstName());
    query.bindValue(":last_name_paternal", user.getLastNamePaternal());
    query.bindValue(":last_name_maternal", user.getLastNameMaternal());
    query.bindValue(":employee_id", user.getEmployeeId());
    query.bindValue(":card_number", user.getCardNumber());

    if (!query.exec()) {
        qDebug() << "Failed to add user:" << query.lastError();
        return false;
    }
    return true;
}

DatabaseManager::~DatabaseManager() {
    if (db.isOpen()) {
        db.close();
    }
}

bool DatabaseManager::openDatabase(const QString &dbName) {
    if (db.isOpen()) {
        return true;  // La base de datos ya está abierta
    }

    db.setDatabaseName(dbName);

    if (!db.open()) {
        qDebug() << "Error opening database:" << db.lastError().text();
        return false;
    }

    qDebug() << "Database opened successfully!";
    return true;
}


