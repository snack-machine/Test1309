#pragma once

#include <QObject>
#include <QGeoCoordinate>

class DirectionFinderUnit : public QObject
{
    Q_OBJECT

    Q_PROPERTY(size_t id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(QGeoCoordinate coordinates READ coordinates WRITE setCoordinates NOTIFY coordinatesChanged)
    Q_PROPERTY(double azimuth READ azimuth WRITE setAzimuth NOTIFY azimuthChanged)

public:
    DirectionFinderUnit(QObject* parent = nullptr);

    size_t id() const;
    void setId(size_t id);

    QGeoCoordinate coordinates() const;
    void setCoordinates(const QGeoCoordinate& coordinates);

    double azimuth() const;
    void setAzimuth(double azimuth);

signals:
    void idChanged();
    void coordinatesChanged();
    void azimuthChanged();

private:
    size_t id_;
    QGeoCoordinate coordinates_;
    double azimuth_;
};
