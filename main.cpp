#include "view/mainwindow.h"
#include <QApplication>

using namespace G40853;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
