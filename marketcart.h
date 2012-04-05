#ifndef MARKETCART_H
#define MARKETCART_H
#include<QDialog>
#include<QComboBox>
#include"ui_marketcart.h"

class marketcart:public QDialog,public Ui::MarketCart
{
 Q_OBJECT
 QString url;
 public:
 marketcart();
 ~marketcart()
 {
     url.clear();
 }

 void Connections();
 private slots:
 void Back();
 void ShowHomeShop18Menu();
 void ShowFlipKartMenu();
 void ShowAmazonMenu();
 void SearchHomeShop18();
 void SearchFlipKart();
 void SearchAmazon();

};

#endif // MARKETCART_H
