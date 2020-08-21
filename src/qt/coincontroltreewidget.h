#ifndef COINCONTROLTREEWIDGET_H
#define COINCONTROLTREEWIDGET_H

#include <QKeyEvent>
#include <QtWidgets/QTreeWidget>

class CoinControlTreeWidget : public QTreeWidget {
Q_OBJECT

public:
    explicit CoinControlTreeWidget(QWidget *parent = 0);
    
protected:
  virtual void  keyPressEvent(QKeyEvent *event);
};

#endif // COINCONTROLTREEWIDGET_H
