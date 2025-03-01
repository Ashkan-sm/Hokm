#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "models/UiBridge.h"
#include "models/game.h"
#include <thread>
#include <chrono>
#include "models/scoregridclass.h"



int main(int argc, char *argv[])
{
    std::srand(std::time(0));
    QGuiApplication app(argc, argv);

    Game game;
    game.init();
    game.start();

    UiBridge &uibridge=UiBridge::getInstance();

    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("UiBridge", &uibridge);
    qmlRegisterSingletonType<UiBridge>("com.myapp", 1, 0, "UiBridge", &UiBridge::qmlInstance);
    qmlRegisterType<ScoreGridClass>("com.myapp", 1, 0, "ScoreGrid");

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
