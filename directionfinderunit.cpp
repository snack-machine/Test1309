#include "DirectionFinderUnit.h"

DirectionFinderUnit::DirectionFinderUnit(QObject* parent)
    : QObject(parent), id_(0), azimuth_(0)
{
}

size_t DirectionFinderUnit::id() const
{
    return id_;
}

void DirectionFinderUnit::setId(size_t id)
{
    if (id_ != id) {
        id_ = id;
        emit idChanged();
    }
}

QGeoCoordinate DirectionFinderUnit::coordinates() const
{
    return coordinates_;
}

void DirectionFinderUnit::setCoordinates(const QGeoCoordinate& coordinates)
{
    if (coordinates_ != coordinates) {
        coordinates_ = coordinates;
        emit coordinatesChanged();
    }
}

double DirectionFinderUnit::azimuth() const
{
    return azimuth_;
}

void DirectionFinderUnit::setAzimuth(double azimuth)
{
    if (azimuth_ != azimuth) {
        azimuth_ = azimuth;
        emit azimuthChanged();
    }
}
