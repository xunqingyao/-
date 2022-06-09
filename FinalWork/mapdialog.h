#ifndef MAPDIALOG_H
#define MAPDIALOG_H

#include <QDialog>
#include<QMessageBox>
#include <vector>
#include "map.h"
#include "Request.h"
namespace Ui {
class MapDialog;
}

class MapDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MapDialog(QWidget *parent = nullptr);
    ~MapDialog();
signals:
    void backToMain();
private slots:
    void on_searchTheWayButton_clicked();

    void on_cancelSearchButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::MapDialog *ui;
};

#endif // MAPDIALOG_H
