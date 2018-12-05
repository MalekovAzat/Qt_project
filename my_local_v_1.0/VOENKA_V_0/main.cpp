
#include<QtWidgets>
#include"desk.h"

//#include"variablepicture.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyDesk b(0,1,10);

    b.resize(1022,692);
    b.show();

    return a.exec();
}
