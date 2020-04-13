#include <QFile>
#include <QTextStream>

#include "mainlocal.h"
#include "ui_mainlocal.h"

MainLocal::MainLocal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainLocal)
{
    ui->setupUi(this);
    loadTextFile();
}

MainLocal::~MainLocal()
{
    delete ui;
}

void MainLocal::on_searchButton_clicked()
{
    QString searchString = ui->lineEdit->text();
    ui->textEdit->find(searchString, QTextDocument::FindWholeWords);
}

void MainLocal::loadTextFile()
{
    QFile inputFile(":/sample.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line = in.readAll();
    inputFile.close();

    ui->textEdit->setPlainText(line);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}
