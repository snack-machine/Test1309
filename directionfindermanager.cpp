#include "directionfindermanager.h"

DirectionFinderManager::DirectionFinderManager(QObject* parent)
    : QObject(parent)
{
}

QVariantList DirectionFinderManager::directionUnits() const
{
    return directionUnitList_;
}

void DirectionFinderManager::addDirectionUnit(DirectionFinderUnit* unit)
{
    directionUnitList_.append(QVariant::fromValue(unit));
    emit directionUnitsChanged();
}
