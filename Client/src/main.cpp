#include <QApplication>
#include "ui_loginwidget.h"
#include "login/loginwidget.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  LoginWidget w;
  w.show();

  return a.exec();
}
