#include<QApplication>
#include"dextrous.h"
#include<QtGui>
int main(int a, char *b[])
{
    QApplication ob(a,b);
    dextrous *obj=new dextrous;
    obj->show();
    return ob.exec();
}

//put Icon
//put about box
//things to study ->OG , graph , QWebkit
