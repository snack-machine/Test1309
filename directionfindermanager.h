#pragma once

#include "directionfinderunit.h"

#include <QObject>
#include <QVariantList>

class DirectionFinderManager : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QVariantList directionUnits READ directionUnits NOTIFY directionUnitsChanged)

public:
    DirectionFinderManager(QObject* parent = nullptr);

    QVariantList directionUnits() const;

public slots:
    void addDirectionUnit(DirectionFinderUnit* unit);

signals:
    void directionUnitsChanged();

private:
    QVariantList directionUnitList_;
};
