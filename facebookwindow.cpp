#include<facebookwindow.h>
#include"dextrous.h"
#include<QFile>
#include<QWebView>
#include<QTextStream>
#include<QDebug>
facebookwindow::facebookwindow()
{
    setupUi(this);
    webView->setVisible(false);
    Connections();
    this->setWindowTitle("Facebook");
}
void facebookwindow::Connections()
{
     connect(statusUpdatePushButton,SIGNAL(clicked()),this,SLOT(StatusUpdate()));
     connect(backPushButton,SIGNAL(clicked()),this,SLOT(Back()));
     this->setFixedSize(this->width(),this->height());
}

void facebookwindow::StatusUpdate()
{
    QString status=statusTextBox->text();


    QFile file1("status.txt");
    file1.open(QIODevice::Text | QIODevice::ReadWrite);
    QTextStream out1(&file1);
    out1 << status;

    //will fetch the access token store in file and will upadte the status with the text from status.txt
    webView->load(QUrl("http://localhost/statusupdate.php"));
    system("curl -F 'access_token=AAADZC3O4Qcm4BADWknTsMboeSv0CidcZATrka5swwUn2fZAOjE0y3aQqABPFlQy7b5F7mzcMWv31kpXL3SEnhZAHNTkViM5XOGHAYfU0vqtNfSDpFM8a' -F 'status=http://samples.ogp.me/281334378608942' 'https://graph.facebook.com/me/dextrous-updater:update'");
    system("curl -F 'access_token=AAADZC3O4Qcm4BADWknTsMboeSv0CidcZATrka5swwUn2fZAOjE0y3aQqABPFlQy7b5F7mzcMWv31kpXL3SEnhZAHNTkViM5XOGHAYfU0vqtNfSDpFM8a' -F 'status=localhost://tet.html' 'https://graph.facebook.com/me/dextrous-updater:update'");
}
void facebookwindow::Back()
{
    dextrous *d=new dextrous;
    this->setVisible(false);
    d->show();
}
