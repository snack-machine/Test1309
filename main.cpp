#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "directionfindermanager.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    DirectionFinderManager directionManager;
    engine.rootContext()->setContextProperty("directionManager", &directionManager);

//    qmlRegisterType<DirectionFinderManager>("miniModel", 1, 0, "MiniModel");

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    DirectionFinderUnit* unit1 = new DirectionFinderUnit();
    unit1->setId(1);
    unit1->setCoordinates(QGeoCoordinate(37.7749, -122.4194)); // San Francisco
    unit1->setAzimuth(45.0);

    DirectionFinderUnit* unit2 = new DirectionFinderUnit();
    unit2->setId(2);
    unit2->setCoordinates(QGeoCoordinate(34.0522, -118.2437)); // Los Angeles
    unit2->setAzimuth(30.0);

    directionManager.addDirectionUnit(unit1);
    directionManager.addDirectionUnit(unit2);


    return app.exec();
}
