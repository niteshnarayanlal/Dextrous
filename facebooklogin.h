#ifndef FACEBOOKLOGIN_H
#define FACEBOOKLOGIN_H
#include"ui_facebooklogin.h"
#include<QDialog>
class facebooklogin:public QDialog,Ui::FacebookLogin
{
     Q_OBJECT
public:
    facebooklogin();
private slots:
    void getToken(QUrl);
};

#endif // FACEBOOKLOGIN_H
