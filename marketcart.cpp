#include<QUrl>
#include<QtWebKit/QWebView>
#include<QComboBox>
#include"dextrous.h"
#include"marketcart.h"
#include<iostream>
using namespace std;

marketcart::marketcart()
{
    setupUi(this);
    itemNameErrorLabel->setVisible(false);
    Connections();
    this->setFixedSize(this->width(),this->height());

this->setWindowTitle("MarketCart");


}
void marketcart::Connections()
{
    connect(backPushButton,SIGNAL(clicked()),this,SLOT(Back()));
    connect(homeShop18PushButton,SIGNAL(clicked()),this,SLOT(SearchHomeShop18()));
    connect(amazonPushButton,SIGNAL(clicked()),this,SLOT(SearchAmazon()));
    connect(flipKartPushButton,SIGNAL(clicked()),this,SLOT(SearchFlipKart()));
    connect(homeShop18RadioButton,SIGNAL(toggled(bool)),this,SLOT(ShowHomeShop18Menu()));
    connect(amazonRadioButton,SIGNAL(toggled(bool)),this,SLOT(ShowAmazonMenu()));
    connect(flipKartRadioButton,SIGNAL(toggled(bool)),this,SLOT(ShowFlipKartMenu()));
}
void marketcart::SearchAmazon()
{
    char value[100][100]={"aps","instant-video","appliances"
   ,"mobile-apps","arts-crafts","automotive"
   ,"baby-products","beauty","stripbooks","mobile",
    "apparel","computers","electronics",
    "gift-cards","grocery","hpc","garden","industrial",
                          "jewelry","digital-text","magazines","movies-tv",
                          "digital-music","popular","mi","office-products",
                          "outdoor","pets","shoes","software","sporting","tools","toys-and-games",
                          "videogames","watches"};

    int selected= amazonComboBox->currentIndex();

    QString amazon1="http://www.amazon.com/s/ref=nb_sb_noss?url=";
    QString amazon2="&field-keywords=";
    QString amazon3="&x=0&y=0";
    url.clear();
    url.append(amazon1);
    url.append(value[selected]);
    url.append(amazon2);
    url.append(itemNameTextBox->text());
    url.append(amazon3);


    webView->setStyleSheet("background-color:rgb(150,147,88); padding: 7px ; color:rgb(255,255,255)");
    webView->load(QUrl(url));
    webView->showMaximized();

}
void marketcart::SearchFlipKart()
{
    QString urlfk1="http://www.flipkart.com/";
    QString urlfk2="?dd=0&query=";
    QString url;

    char value[100][100]={"search-books","search/a/mobiles","search-computer-accessories"
   ,"search/a/cameras","search/a/games","search/a/movies"
   ,"search-music","search/a/audioplayers","search/a/phcare",
    "search-homeappliances","search/a/tv-video",};
    int selected= flipKartComboBox->currentIndex();


    QString productName="";
    productName.append(itemNameTextBox->text());

    url.clear();
    url.append(urlfk1);
    url.append(value[selected]);
    url.append(urlfk2);
    url.append(productName);

    webView->setStyleSheet("background-color:rgb(150,147,88); padding: 7px ; color:rgb(255,255,255)");
    webView->load(QUrl(url));
    webView->showMaximized();

}
void marketcart::SearchHomeShop18()
{
    QString urlhm1="http://";
    QString urlhm2=".homeshop18.com/";
    QString url;

    char value[100][100]={"books","mobiles","camera","electronics","computer","apparel","jewellry","home","kids"
                          ,"toys","gifts","household"};

    int selected= homeShop18ComboBox->currentIndex();

    QString productName="";
    productName.append(itemNameTextBox->text());
    productName.append("/search:");
    productName.append(itemNameTextBox->text());
    url.clear();
    url.append(urlhm1);
    url.append(value[selected]);
    url.append(urlhm2);
    url.append(productName);


    webView->setStyleSheet("background-color:rgb(150,147,88); padding: 7px ; color:rgb(255,255,255)");
    webView->load(QUrl(url));
    webView->showMaximized();



}

void marketcart::ShowAmazonMenu()
{


    cout<<"\n inside amazon menu ";
    amazonComboBox->setVisible(true);
    flipKartComboBox->setVisible(false);
    homeShop18ComboBox->setVisible(false);
    int countValue=amazonComboBox->count();
    for(int i=0;i<countValue;i++)
    amazonComboBox->removeItem(i);
    amazonComboBox->addItem("All Departments");
    amazonComboBox->addItem("Amazon Instant Video");
    amazonComboBox->addItem("Appliances");
    amazonComboBox->addItem("Apps for Android");
    amazonComboBox->addItem("Arts, Crafts & Sewing");
    amazonComboBox->addItem("Automotive");
    amazonComboBox->addItem("Baby");
    amazonComboBox->addItem("Beauty");
    amazonComboBox->addItem("Books");
    amazonComboBox->addItem("Cell Phones & Accessories");
    amazonComboBox->addItem("Clothing & Accessories");
    amazonComboBox->addItem("Computers");
    amazonComboBox->addItem("Electronics");
    amazonComboBox->addItem("Gift Cards");
    amazonComboBox->addItem("Grocery & Gourmet Food");
    amazonComboBox->addItem("Health & Personal Care");
    amazonComboBox->addItem("Home & Kitchen");
    amazonComboBox->addItem("Industrial & Scientific");
    amazonComboBox->addItem("Jewelry");
    amazonComboBox->addItem("Kindle Store");
    amazonComboBox->addItem("Magazine Subscriptions");
    amazonComboBox->addItem("Movies & TV");
    amazonComboBox->addItem("MP3 Downloads");
    amazonComboBox->addItem("Music");
    amazonComboBox->addItem("Musical Instruments");
    amazonComboBox->addItem("Office Products");
    amazonComboBox->addItem("Patio, Lawn & Garden");
    amazonComboBox->addItem("Pet Supplies ");
    amazonComboBox->addItem("Shoes");
    amazonComboBox->addItem("Software");
    amazonComboBox->addItem("Sports & Outdoors");
    amazonComboBox->addItem("Tools & Home Improvement");
    amazonComboBox->addItem("Toys & Games");
    amazonComboBox->addItem("Video Games");
    amazonComboBox->addItem("Watches");




}
void marketcart::ShowHomeShop18Menu()
{

    homeShop18ComboBox->setVisible(true);
    flipKartComboBox->setVisible(false);
    amazonComboBox->setVisible(false);

     cout<<"\n inside homeshop 18 menu :";

    int countValue=homeShop18ComboBox->count();
    for(int i=0;i<countValue;i++)
    homeShop18ComboBox->removeItem(i);
    homeShop18ComboBox->addItem("Books");
    homeShop18ComboBox->addItem("Mobiles ");
    homeShop18ComboBox->addItem("Camera");
    homeShop18ComboBox->addItem("Electronics");
    homeShop18ComboBox->addItem("Computers");
    homeShop18ComboBox->addItem("Apparel");
    homeShop18ComboBox->addItem("Jewelrys");
    homeShop18ComboBox->addItem("Home & Kitchen ");
    homeShop18ComboBox->addItem("Kids");
    homeShop18ComboBox->addItem("Toys and Games");
    homeShop18ComboBox->addItem("Gifts");
    homeShop18ComboBox->addItem("Applicances");

}
void marketcart::ShowFlipKartMenu()
{

    cout<<"inside flip kar menu ";
    flipKartComboBox->setVisible(true);
    amazonComboBox->setVisible(false);
    homeShop18ComboBox->setVisible(false);
    int countValue=flipKartComboBox->count();
    for(int i=0;i<countValue;i++)
    flipKartComboBox->removeItem(i);
    flipKartComboBox->addItem("Books");
    flipKartComboBox->addItem("Mobiles and accessories");
    flipKartComboBox->addItem("Computers");
    flipKartComboBox->addItem("Camera");
    flipKartComboBox->addItem("Games and Consoless");
    flipKartComboBox->addItem("Movies and TV shows");
    flipKartComboBox->addItem("Music");
    flipKartComboBox->addItem("Audio Players");
    flipKartComboBox->addItem("Personal and Health Care ");
    flipKartComboBox->addItem("Home Appliances");
    flipKartComboBox->addItem("TV and Video Players");

}

void marketcart::Back()
{
    dextrous *d=new dextrous;
    this->setVisible(false);
    d->show();
}
