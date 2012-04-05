#ifndef FACEBOOKWINDOW_H
#define FACEBOOKWINDOW_H
#include"ui_facebookwindow.h"
#include<QDialog>
class facebookwindow:public QDialog,public Ui::Facebook
{
    Q_OBJECT
public:
    facebookwindow();
    void Connections();
private slots:
    void StatusUpdate();
    void Back();
};

#endif // FACEBOOKWINDOW_H
