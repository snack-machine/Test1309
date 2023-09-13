import QtQuick 2.15
import QtQuick.Controls 2.15
import QtLocation 5.15

ApplicationWindow {
    visible: true
    width: 800
    height: 600
    title: "Map with Custom Points"

    Map {
        id: map
        anchors.fill: parent

        // Add a MapItemView to display custom points
        MapItemView {
            model: directionManager.directionUnits

            delegate: MapQuickItem {
                coordinate: model.coordinates
                anchorPoint.x: width / 2
                anchorPoint.y: height
                sourceItem: Rectangle {
                    width: 16
                    height: 16
                    color: "red"
                }
            }
        }
    }

    Connections {
        target: directionManager
        function onDirectionUnitsChanged() {
            console.log("[onDirectionUnitsChanged]: ", directionManager.directionUnits[0].azimuth)
            console.log("[onDirectionUnitsChanged]: ", directionManager.directionUnits[0].id)
            console.log("[onDirectionUnitsChanged]: ", directionManager.directionUnits[0].coordinates)


            // Handle changes to the direction units list
            // You can update the map here as needed
        }
    }
}
