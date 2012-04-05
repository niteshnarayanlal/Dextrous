#ifndef LOGIN_H
#define LOGIN_H
#include"ui_login.h"
#include<QDialog>
class login:public QDialog,public Ui::Login
{
    Q_OBJECT
public:
    login();
    void Connections();
private slots:
    void Continue();
    void Back();
    void NewUser();
};
#endif // LOGIN_H
