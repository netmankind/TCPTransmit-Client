#include <QApplication>

#include "frmclient.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    frmClient w;
    w.show();

    return a.exec();
}
