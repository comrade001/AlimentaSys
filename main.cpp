#include "alimentasysmain.h"
#include "./database/databasemanager.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Asegúrate de que el nombre de la base de datos es correcto y que se abre
    if (!DatabaseManager::instance().openDatabase("alimentasys.db")) {
        qDebug() << "Failed to open database";
        return -1;
    }

    AlimentaSysMain w;
    w.show();
    return a.exec();
}
