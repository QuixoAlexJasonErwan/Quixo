#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGraphicsScene*ma_scene;
    ma_scene=new QGraphicsScene();

    //int tableau[5][5];

    //for(int x=0;x<5;x++)
    //{
    //    for(int y=0;x<5;y++)
    //    {
    QGraphicsPixmapItem*mon_item;
    mon_item = new QGraphicsPixmapItem();
    QGraphicsPixmapItem*mon_item2;
    mon_item2 = new QGraphicsPixmapItem();
    //    }
    //}


    QPixmap*rond=new QPixmap(":/rond.png");
    QPixmap*croix=new QPixmap(":/croix.png");
    QPixmap*neutre=new QPixmap(":/neutre.png");
    mon_item->setPixmap(*rond);
    mon_item2->setPixmap(*croix);
    ma_scene->addItem(mon_item);
    ma_scene->addItem(mon_item2);
    ui->graphicsView->setScene(ma_scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}
