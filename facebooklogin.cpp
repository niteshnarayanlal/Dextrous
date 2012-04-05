#include"facebooklogin.h"
#include<QtWebKit>
#include<QWebView>
#include<QLabel>
#include<QDebug>

facebooklogin::facebooklogin()
{
setupUi(this);
QUrl url=QUrl("https://graph.facebook.com/oauth/authorize?type=user_agent&client_id=281324351943278&redirect_uri=http://stormy-journey-9302.herokuapp.com/&scope=read_stream,offline_access");
webView->load(url);
webView->showMaximized();
connect(webView,SIGNAL(urlChanged(QUrl)),this,SLOT(getToken(QUrl)));
this->setFixedSize(this->width(),this->height());
this->setWindowTitle("New User ");
}
void facebooklogin::getToken(QUrl url)
{

QString accessToken=url.toString();
QString access="";
/*
//QRegExp reg("#access_token=*&");
QString finalstatus = accessToken.split("&");
qDebug()<<"FINAL STATUS "<<finalstatus;*/
int i=0;
while(i<accessToken.length())
{
    if(accessToken.at(i)=='k'&&accessToken.at(i+1)=='e'&&accessToken.at(i+2)=='n'&&accessToken.at(i+3)=='=')
    {
        i=i+4;
        while(accessToken.at(i)!='&')
        {

            access.append(accessToken.at(i));
            i++;

        }

    }
    else
    i++;
}


qDebug()<<"value!!!!!!!!!!!!!!"<<access;
QFile file("accesstoken.txt");
file.open(QIODevice::Text | QIODevice::ReadWrite);
QTextStream out(&file);
out << access;
file.close();

}
