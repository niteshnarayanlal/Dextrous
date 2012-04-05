#include"dextrous.h"
#include"marketcart.h"
#include"login.h"
#include"tweetViewer.h"
#include"musicsearchwindow.h"
#include"tweetViewer.h"
#include"newsviewer.h"
dextrous::dextrous()
{
    this->setupUi(this);
    Connections();
    this->setWindowTitle("Dextrous");
    this->setFixedSize(this->width(),this->height());
}
void dextrous::Connections()
{
connect(facebookPushButton,SIGNAL(clicked()),this,SLOT(ShowFacebookLogin()));
connect(musicSearchPushButton,SIGNAL(clicked()),this,SLOT(ShowMusicSearch()));
connect(marketPushButton,SIGNAL(clicked()),this,SLOT(ShowMarketCart()));
connect(tweetViewer,SIGNAL(clicked()),this,SLOT(ShowTweetViewer()));
connect(newsViewer,SIGNAL(clicked()),this,SLOT(ShowNewsViewer()));
}

void dextrous::ShowMarketCart()
{
    marketcart *mc=new marketcart;
    this->setVisible(false);
    mc->show();
}
void dextrous::ShowMusicSearch()
{
    musicsearchwindow *msw=new musicsearchwindow;
    this->setVisible(false);
    msw->show();
}
void dextrous::ShowFacebookLogin()
{
    login *l=new login;
    this->setVisible(false);
    l->show();
}

void dextrous::ShowTweetViewer()
{
    tweetviewer *tw=new tweetviewer;
    this->setVisible(false);
    tw->show();
}
void dextrous::ShowNewsViewer()
{
    newsviewer *tw=new newsviewer;
    this->setVisible(false);
    tw->show();
}
