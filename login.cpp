#include<login.h>
#include"dextrous.h"
#include"facebookwindow.h"
#include<QtWebKit/QWebView>
#include<QUrl>
#include<QWebView>
#include<iostream>
#include<QApplication>
#include"facebooklogin.h"
login::login()
{
setupUi(this);
Connections();
this->setWindowTitle("Login");
this->setFixedSize(this->width(),this->height());
}
void login::Connections()
{
connect(continuepushButton,SIGNAL(clicked()),this,SLOT(Continue()));
connect(backPushButton,SIGNAL(clicked()),this,SLOT(Back()));
connect(newUserPushButton,SIGNAL(clicked()),this,SLOT(NewUser()));

}
void login::Continue()
{
    this->setVisible(false);
    facebookwindow *fb=new facebookwindow();
    fb->show();

}
void login::NewUser()
{
this->show();
facebooklogin *fb=new facebooklogin;
fb->show();

}

void login::Back()
{
dextrous *d=new dextrous;
this->setVisible(false);
d->show();
}
