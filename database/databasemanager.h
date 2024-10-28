#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>
#include "../models/user.h"

class DatabaseManager {
public:
    static DatabaseManager& instance();  // Singleton para obtener la instancia de la clase
    bool openDatabase(const QString &dbName);  // Método para abrir la base de datos
    void closeDatabase();  // Método para cerrar la base de datos

    bool addUser(const User &user);

    QSqlDatabase getDatabase() const;  // Acceso a la base de datos
private:
    DatabaseManager();
    ~DatabaseManager();
    DatabaseManager& operator=(const DatabaseManager&) = delete;

    QSqlDatabase db;  // Objeto de base de datos
};

#endif // DATABASEMANAGER_H
