#ifndef NEWSVIEWER_H
#define NEWSVIEWER_H
#include"ui_newsviewer.h"
#include<QDialog>
class newsviewer: public QDialog, public Ui::news
{
    Q_OBJECT
    public:
        newsviewer();
    private slots:
        void Back();
        void Search();
};

#endif // NEWSVIEWER_H
