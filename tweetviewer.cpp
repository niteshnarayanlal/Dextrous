#include"tweetViewer.h"
#include<QWebView>
#include"dextrous.h"
#include<QDebug>
tweetviewer::tweetviewer()
{
setupUi(this);
connect(submitPushButton,SIGNAL(clicked()),this,SLOT(Search()));
connect(backPushButton,SIGNAL(clicked()),this,SLOT(Back()));
this->setFixedSize(this->width(),this->height());
}
void tweetviewer::Back()
{
    dextrous *d=new dextrous;
    this->setVisible(false);
    d->show();
}

void tweetviewer::Search()
{
QString matter=tweetViewerTextBox->text();
QString url="https://twitter.com/#!/";
url.append(matter);
webView->setStyleSheet("background-color:rgb(150,147,88); padding: 7px ; color:rgb(255,255,255)");
webView->load(QUrl(url));
webView->showMaximized();
}
