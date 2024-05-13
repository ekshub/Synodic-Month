#include "GameDemo1.h"
#include"GameControl.h"

GameDemo1* GameDemo1::MainWindow = nullptr;

GameDemo1::GameDemo1(QWidget *parent)
    : QMainWindow(parent)
{
    MainWindow = this;
    setFixedSize(GameDefine::WindowWidth, GameDefine::WindowHeight);
    MainWindow->setWindowTitle("Synodic Month");
    MainWindow->setWindowIcon(QIcon("D:\\tower\\GameIcon.png"));
}

GameDemo1::~GameDemo1()
{}

void GameDemo1::keyPressEvent(QKeyEvent * event)
{
    GameControl::Instance()->keyPressEvent(event);
}

