import QtQuick

Item {
    id:chartScore
    Grid{


        rows: 3
        columns: 3
        Rectangle{
            color: "transparent"
            width: chartScore.width/3
            height: chartScore.height/3
            radius: 10
        }
        Rectangle{
            color: "gray"
            width: chartScore.width/3
            height: chartScore.height/3
            radius: 10
            Text {
                anchors.centerIn: parent
                text: qsTr("You")
                font.bold: true
                font.pointSize: 20
            }
        }
        Rectangle{
            color: "gray"
            width: chartScore.width/3
            height: chartScore.height/3
            radius: 10
            Text {
                anchors.centerIn: parent
                text: qsTr("Opn")
                font.bold: true
                font.pointSize: 20
            }
        }
        Rectangle{
            color: "gray"
            width: chartScore.width/3
            height: chartScore.height/3
            radius: 10
            Text {
                anchors.centerIn: parent
                text: qsTr("Game")
                font.bold: true
                font.pointSize: 20
            }
        }
        Rectangle{
            color: "gray"
            width: chartScore.width/3
            height: chartScore.height/3
            radius: 10
            Text {
                text: UiBridge.Scoregird.YourGameScore
                anchors.centerIn: parent
                font.bold: true
                font.pointSize: 20
            }
        }
        Rectangle{
            color: "gray"
            width: chartScore.width/3
            height: chartScore.height/3
            radius: 10
            Text {
                text: UiBridge.Scoregird.OpnGameScore
                anchors.centerIn: parent
                font.bold: true
                font.pointSize: 20
            }
        }
        Rectangle{
            color: "gray"
            width: chartScore.width/3
            height: chartScore.height/3
            radius: 10
            Text {
                anchors.centerIn: parent
                text: qsTr("Score")
                font.bold: true
                font.pointSize: 20
            }
        }
        Rectangle{
            color: "gray"
            width: chartScore.width/3
            height: chartScore.height/3
            radius: 10
            Text {
                text: UiBridge.Scoregird.YourScore
                anchors.centerIn: parent
                font.bold: true
                font.pointSize: 20
            }
        }
        Rectangle{
            color: "gray"
            width: chartScore.width/3
            height: chartScore.height/3
            radius: 10
            Text {
                text: UiBridge.Scoregird.OpnScore
                anchors.centerIn: parent
                font.bold: true
                font.pointSize: 20
            }
        }



    }
}
