#include "mapdialog.h"
#include "ui_mapdialog.h"

MapDialog::MapDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MapDialog)
{
    ui->setupUi(this);
    setWindowTitle("MAP");

}

MapDialog::~MapDialog()
{
    delete ui;
}

void MapDialog::on_searchTheWayButton_clicked()
{
    QString start,destination;
    start = ui->startPlaceEdit->text();
    destination = ui->destinationEdit->text();
    Map *theMap = new Map();
    QString textLog = "搜索从"+ start + "到" + destination + "的路程\n";
    Request::log(textLog.toStdString());
    if((ui->BenToShacheckBox->isChecked() && ui->ShaToBencheckBox->isChecked())||(ui->BenToShacheckBox->isChecked() && ui->BencheckBox->isChecked())||(ui->BenToShacheckBox->isChecked() &&ui->ShacheckBox->isChecked())||(ui->ShacheckBox->isChecked() &&ui->BencheckBox->isChecked())||(ui->ShacheckBox->isChecked() && ui->ShaToBencheckBox->isChecked())||(ui->ShaToBencheckBox->isChecked() && ui->BencheckBox->isChecked()))
    {
         QMessageBox::warning(this, "WARNING", "只能选择一个模式", QMessageBox::Ok);
         ui->startPlaceEdit->clear();
         ui->destinationEdit->clear();
         ui->BencheckBox->setCheckState(Qt::Unchecked);
         ui->ShacheckBox->setCheckState(Qt::Unchecked);
         ui->BenToShacheckBox->setCheckState(Qt::Unchecked);
         ui->ShaToBencheckBox->setCheckState(Qt::Unchecked);
         ui->MinDischeckBox->setCheckState(Qt::Unchecked);
         ui->MinTimecheckBox->setCheckState(Qt::Unchecked);
         ui->BikecheckBox->setCheckState(Qt::Unchecked);

         return;
    }
    if(ui->busCheckBox->isChecked() && ui->schoolBusCheckBox->isChecked())
    {
        QMessageBox::warning(this, "WARNING", "只能选择一个跨校区模式", QMessageBox::Ok);
        return;
    }
    if((ui->busCheckBox->isChecked() || ui->schoolBusCheckBox->isChecked()) && !(ui->busCheckBox->isChecked() || ui->schoolBusCheckBox->isChecked()))
    {
        QMessageBox::warning(this, "WARNING", "请选择一个跨校区模式", QMessageBox::Ok);
        return;
    }
    if((ui->BikecheckBox->isChecked() && ui->MinDischeckBox->isChecked())||(ui->BikecheckBox->isChecked() && ui->MinTimecheckBox->isChecked())||(ui->MinDischeckBox->isChecked() && ui->MinTimecheckBox->isChecked()))
    {
        QMessageBox::warning(this, "WARNING", "只能选择一种导航策略", QMessageBox::Ok);
        ui->startPlaceEdit->clear();
        ui->destinationEdit->clear();
        ui->BencheckBox->setCheckState(Qt::Unchecked);
        ui->ShacheckBox->setCheckState(Qt::Unchecked);
        ui->BenToShacheckBox->setCheckState(Qt::Unchecked);
        ui->ShaToBencheckBox->setCheckState(Qt::Unchecked);
        ui->MinDischeckBox->setCheckState(Qt::Unchecked);
        ui->MinTimecheckBox->setCheckState(Qt::Unchecked);
        ui->BikecheckBox->setCheckState(Qt::Unchecked);

        return;
    }
    else if(ui->BikecheckBox->isChecked())//自行车
    {
        if(ui->ShacheckBox->isChecked())//沙河
        {
            ui->textEdit->clear();
            ui->textEdit->append("最短距离:\n" + start);
            for(auto it : theMap->dijkstra(start, destination, 3, 1))
            {
                QString text;
                text = "->" + it.end.name;
                ui->textEdit->append(text);
            }
        }
        else if(ui->BencheckBox->isChecked())//本部
        {
            ui->textEdit->clear();
            ui->textEdit->append("最短距离:\n" + start);
            for(auto it : theMap->dijkstra(start, destination, 3, 2))
            {
                QString text;
                text = "->" + it.end.name;
                ui->textEdit->append(text);
            }
        }
        else if(ui->ShaToBencheckBox->isChecked())//沙河去本部
        {
            ui->textEdit->clear();
            ui->textEdit->append("最短距离:\n" + start);

            if(ui->schoolBusCheckBox->isChecked())
            {
                for(auto it : theMap->dijkstra(start, "路口41", 3, 1))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
                ui->textEdit->append("~~~乘校车~~~\n");
                QPixmap *schedule = new QPixmap();
                schedule->load(":/new/pic1/schoolbusShaToBen.png");
                ui->transportSchedule->setPixmap(*schedule);
                ui->textEdit->append("校车点");
                for(auto it : theMap->dijkstra("校车点", destination, 3, 2))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
            }
            else if(ui->busCheckBox->isChecked())
            {
                for(auto it : theMap->dijkstra(start, "西门", 3, 1))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
                ui->textEdit->append("~~~乘公交车~~~\n");
                QPixmap *schedule = new QPixmap();
                schedule->load(":/new/pic1/busShaToBen.png");
                ui->transportSchedule->setPixmap(*schedule);
                ui->textEdit->append("南门");
                for(auto it : theMap->dijkstra("南门", destination, 3, 2))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
            }

        }
        else if(ui->BenToShacheckBox->isChecked())//本部区沙河
        {
            ui->textEdit->clear();
            ui->textEdit->append("最短距离:\n" + start);
            if(ui->schoolBusCheckBox->isChecked())
            {
                for(auto it : theMap->dijkstra(start, "校车点", 3, 2))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
                ui->textEdit->append("~~~乘校车~~~\n");
                QPixmap *schedule = new QPixmap();
                schedule->load(":/new/pic1/schoolbusBenToSha.png");
                ui->transportSchedule->setPixmap(*schedule);
                ui->textEdit->append("路口41");
                for(auto it : theMap->dijkstra("路口41", destination, 3, 1))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
            }
            else if(ui->busCheckBox->isChecked())
            {
                for(auto it : theMap->dijkstra(start, "南门", 3, 2))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
                ui->textEdit->append("~~~乘公交车~~~\n");
                QPixmap *schedule = new QPixmap();
                schedule->load(":/new/pic1/busBenToSha.png");
                ui->transportSchedule->setPixmap(*schedule);
                ui->textEdit->append("西门");
                for(auto it : theMap->dijkstra("西门", destination, 3, 1))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
            }
        }
            }
    /*
     *
     */
    else if(ui->MinDischeckBox->isChecked())//最短距离
    {
        if(ui->ShacheckBox->isChecked())//沙河
        {
            ui->textEdit->clear();
            ui->textEdit->append("最短距离:\n" + start);
            for(auto it : theMap->dijkstra(start, destination, 1, 1))
            {
                QString text;
                text = "->" + it.end.name;
                ui->textEdit->append(text);
            }
        }
        else if(ui->BencheckBox->isChecked())//本部
        {
            ui->textEdit->clear();
            ui->textEdit->append("最短距离:\n" + start);
            for(auto it : theMap->dijkstra(start, destination, 1, 2))
            {
                QString text;
                text = "->" + it.end.name;
                ui->textEdit->append(text);
            }
        }
        else if(ui->ShaToBencheckBox->isChecked())//沙河去本部
        {
            ui->textEdit->clear();
            ui->textEdit->append("最短距离:\n" + start);

            if(ui->schoolBusCheckBox->isChecked())
            {
                for(auto it : theMap->dijkstra(start, "路口41", 1, 1))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
                ui->textEdit->append("~~~乘校车~~~\n");
                QPixmap *schedule = new QPixmap();
                schedule->load(":/new/pic1/schoolbusShaToBen.png");
                ui->transportSchedule->setPixmap(*schedule);
                ui->textEdit->append("校车点");
                for(auto it : theMap->dijkstra("校车点", destination, 1, 2))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
            }
            else if(ui->busCheckBox->isChecked())
            {
                for(auto it : theMap->dijkstra(start, "西门", 1, 1))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
                ui->textEdit->append("~~~乘公交车~~~\n");
                QPixmap *schedule = new QPixmap();
                schedule->load(":/new/pic1/busShaToBen.png");
                ui->transportSchedule->setPixmap(*schedule);
                ui->textEdit->append("南门");
                for(auto it : theMap->dijkstra("南门", destination, 1, 2))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
            }

        }
        else if(ui->BenToShacheckBox->isChecked())//本部区沙河
        {
            ui->textEdit->clear();
            ui->textEdit->append("最短距离:\n" + start);
            if(ui->schoolBusCheckBox->isChecked())
            {
                for(auto it : theMap->dijkstra(start, "校车点", 1, 2))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
                ui->textEdit->append("~~~乘校车~~~\n");
                QPixmap *schedule = new QPixmap();
                schedule->load(":/new/pic1/schoolbusBenToSha.png");
                ui->transportSchedule->setPixmap(*schedule);
                ui->textEdit->append("路口41");
                for(auto it : theMap->dijkstra("路口41", destination, 1, 1))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
            }
            else if(ui->busCheckBox->isChecked())
            {
                for(auto it : theMap->dijkstra(start, "南门", 1, 2))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
                ui->textEdit->append("~~~乘公交车~~~\n");
                QPixmap *schedule = new QPixmap();
                schedule->load(":/new/pic1/busBenToSha.png");
                ui->transportSchedule->setPixmap(*schedule);
                ui->textEdit->append("西门");
                for(auto it : theMap->dijkstra("西门", destination, 1, 1))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
            }
        }
    }
    else if(ui->MinTimecheckBox->isChecked())//最短时间
    {
        if(ui->ShacheckBox->isChecked())//沙河
        {
            ui->textEdit->clear();
            ui->textEdit->append("最短距离:\n" + start);
            for(auto it : theMap->dijkstra(start, destination, 2, 1))
            {
                QString text;
                text = "->" + it.end.name;
                ui->textEdit->append(text);
            }
        }
        else if(ui->BencheckBox->isChecked())//本部
        {
            ui->textEdit->clear();
            ui->textEdit->append("最短距离:\n" + start);
            for(auto it : theMap->dijkstra(start, destination, 2, 2))
            {
                QString text;
                text = "->" + it.end.name;
                ui->textEdit->append(text);
            }
        }
        else if(ui->ShaToBencheckBox->isChecked())//沙河去本部
        {
            ui->textEdit->clear();
            ui->textEdit->append("最短距离:\n" + start);
            //校车
            if(ui->schoolBusCheckBox->isChecked())
            {
                for(auto it : theMap->dijkstra(start, "路口41", 2, 1))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
                ui->textEdit->append("~~~乘校车~~~\n");
                QPixmap *schedule = new QPixmap();
                schedule->load(":/new/pic1/schoolbusShaToBen.png");
                ui->transportSchedule->setPixmap(*schedule);
                ui->textEdit->append("校车点");
                for(auto it : theMap->dijkstra("校车点", destination, 2, 2))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
            }
            //公交车
            else if(ui->busCheckBox->isChecked())
            {
                for(auto it : theMap->dijkstra(start, "西门", 2, 1))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
                ui->textEdit->append("~~~乘公交车~~~\n");
                QPixmap *schedule = new QPixmap();
                schedule->load(":/new/pic1/busShaToBen.png");
                ui->transportSchedule->setPixmap(*schedule);
                ui->textEdit->append("南门");
                for(auto it : theMap->dijkstra("南门", destination, 2, 2))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
            }

        }
        else if(ui->BenToShacheckBox->isChecked())//本部区沙河
        {
            ui->textEdit->clear();
            ui->textEdit->append("最短距离:\n" + start);
            if(ui->schoolBusCheckBox->isChecked())
            {
                for(auto it : theMap->dijkstra(start, "校车点", 2, 2))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
                ui->textEdit->append("~~~乘校车~~~\n");
                QPixmap *schedule = new QPixmap();
                schedule->load(":/new/pic1/schoolbusBenToSha.png");
                ui->transportSchedule->setPixmap(*schedule);
                ui->textEdit->append("路口41");
                for(auto it : theMap->dijkstra("路口41", destination, 2, 1))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
            }
            else if(ui->busCheckBox->isChecked())
            {
                for(auto it : theMap->dijkstra(start, "南门", 2, 2))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
                ui->textEdit->append("~~~乘公交车~~~\n");
                QPixmap *schedule = new QPixmap();
                schedule->load(":/new/pic1/busBenToSha.png");
                ui->transportSchedule->setPixmap(*schedule);
                ui->textEdit->append("西门");
                for(auto it : theMap->dijkstra("西门", destination, 2, 1))
                {
                    QString text;
                    text = "->" + it.end.name;
                    ui->textEdit->append(text);
                }
            }
        }
            }
}

void MapDialog::on_cancelSearchButton_clicked()
{
    ui->startPlaceEdit->clear();
    ui->destinationEdit->clear();
}

void MapDialog::on_exitButton_clicked()
{
    this->close();
    emit backToMain();
}
