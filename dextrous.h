#ifndef DEXTROUS_H
#define DEXTROUS_H
#include<QDialog>
#include "ui_dextrous.h"
class dextrous:public QDialog,public Ui::Dextrous
{
Q_OBJECT
public:
dextrous();
void Connections();

private slots:
void ShowFacebookLogin();
void ShowMusicSearch();
void ShowMarketCart();
void ShowTweetViewer();
void ShowNewsViewer();
};

#endif // DEXTROUS_H
