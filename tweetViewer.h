#ifndef TWEETVIEWER_H
#define TWEETVIEWER_H
#include<QDialog>
#include"ui_twitter.h"
class tweetviewer:public QDialog, public Ui::Dialog
{
Q_OBJECT
public:
    tweetviewer();
private slots:
    void Back();
    void Search();
};

#endif // TWEETVIEWER_H
