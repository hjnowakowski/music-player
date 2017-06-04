#include "headers/welcome_window.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    welcome_window w;

    w.show();
    return a.exec();
}
