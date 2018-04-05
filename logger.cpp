#include "logger.h"
#include "ui_logger.h"
#include "start.h"

Logger::Logger(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Logger)
{
    ui->setupUi(this);
}

Logger::~Logger()
{
    delete ui;
}

void Logger::on_pushButton_clicked()
{
    Start();
}

void Logger::on_pushButton_2_clicked()
{
    Start().sendServer();
    Start().reportError();
}
