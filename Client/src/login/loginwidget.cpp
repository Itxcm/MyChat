#include "loginwidget.h"
#include "ui_loginwidget.h"
#include <QFile>

LoginWidget::LoginWidget(QWidget *parent) : QWidget(parent),
                                            ui(new Ui::LoginWidget)
{
  ui->setupUi(this);

  this->setWindowFlags(Qt::FramelessWindowHint);
  this->setAttribute(Qt::WA_TranslucentBackground);

  QFile file(":qss/qss/default.css");
  file.open(QIODevice::ReadOnly);

  qApp->setStyleSheet(file.readAll());
  file.close();
}

LoginWidget::~LoginWidget()
{
  delete ui;
}
