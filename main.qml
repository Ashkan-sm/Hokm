import QtQuick
import com.myapp 1.0

Window {
    property var cardsize: 130
    height: 1000
    title: qsTr("Pasoor")
    visible: true
    width: 1200
    Image {
        anchors.fill: parent
        source: "resource/background.jpg"
        Item{
            id:hokmKon
            visible:UiBridge.UiHokm == ' '
            anchors.centerIn:parent
            width:parent.width /2
            height:parent.height /2
            Row{
                spacing:10
                anchors.centerIn:parent
                Card{
                    imgpath:"spades_A"
                    MouseArea{
                        anchors.fill:parent
                        hoverEnabled:true
                        onEntered:{
                            edge.border.color="cyan"
                        }
                        onExited:{
                            edge.border.color="white"
                        }
                        onClicked:{
                            UiBridge.UiHokm='s'

                        }
                    }
                    Rectangle{
                        id:edge
                        anchors.fill:parent
                        color:"transparent"
                        border.color:"white"
                        border.width:5
                        radius:10
                    }
                }
                Card{
                    imgpath:"hearts_A"
                    MouseArea{
                        anchors.fill:parent
                        hoverEnabled:true
                        onEntered:{
                            edge1.border.color="cyan"
                        }
                        onExited:{
                            edge1.border.color="white"
                        }
                        onClicked:{
                            UiBridge.UiHokm='h'

                        }
                    }
                    Rectangle{
                        id:edge1
                        anchors.fill:parent
                        color:"transparent"
                        border.color:"white"
                        border.width:5
                        radius:10
                    }

                }
                Card{
                    imgpath:"diamonds_A"
                    MouseArea{
                        anchors.fill:parent
                        hoverEnabled:true
                        onEntered:{
                            edge2.border.color="cyan"
                        }
                        onExited:{
                            edge2.border.color="white"
                        }
                        onClicked:{
                            UiBridge.UiHokm='d'

                        }
                    }
                    Rectangle{
                        id:edge2
                        anchors.fill:parent
                        color:"transparent"
                        border.color:"white"
                        border.width:5
                        radius:10
                    }
                }
                Card{
                    imgpath:"clubs_A"
                    MouseArea{
                        anchors.fill:parent
                        hoverEnabled:true
                        onEntered:{
                            edge3.border.color="cyan"
                        }
                        onExited:{
                            edge3.border.color="white"
                        }
                        onClicked:{
                            UiBridge.UiHokm='c';
                        }
                    }
                    Rectangle{
                        id:edge3
                        anchors.fill:parent
                        color:"transparent"
                        border.color:"white"
                        border.width:5
                        radius:10
                    }

                }

            }
        }
        Item {
            id:game
            visible:true
            anchors.fill:parent
            Image {
                id : hokm
                source: "resource/"+UiBridge.UiHokm+".png"
                anchors.left:parent.left
                anchors.top:parent.top
                anchors.margins:20
                width: 70
                height: 70
            }


            Text {
                id: score
                text: "SCORE: "+' '+"- "+' '+"\nGAME: "+' '+" - "+' '
                font.bold: true
                font.pixelSize: 30
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.margins: 10

            }
            Item{
                x:parent.width/2 -width/2
                anchors.top:parent.top
                width:topCards.width
                height:topCards.height
                Crown{
                    visible:UiBridge.hakemId == 2
                    anchors.horizontalCenter:parent.horizontalCenter
                    anchors.top:parent.bottom
                    rotation:180
                }

                Row{
                    id:topCards


                    Repeater{
                        model:UiBridge.P2cards
                        Card{
                            width:cardsize*3/12
                            imgpath:"back_dark"
                        }
                    }
                }
}
            Item{
                y:parent.height/2 -height/2 -50
                anchors.left:parent.left
                width:lc.width
                height:lc.height
                Crown{
                    visible:UiBridge.hakemId == 3
                    anchors.verticalCenter:parent.verticalCenter
                    anchors.left:parent.right
                    rotation:90
                }

                Column{
                    id:lc
                    Repeater{
                        model:UiBridge.P3cards
                        Card{
                            imgpath:"back_dark"
                            height:30
                        }
                    }
                }

            }
            Item{

                y:parent.height/2 -height/2 -50
                anchors.right:parent.right
                width:rc.width
                height:rc.height
                Crown{
                    visible:UiBridge.hakemId == 1
                    anchors.verticalCenter:parent.verticalCenter
                    anchors.right:parent.left
                    rotation:-90
                }

                Column{
                    id:rc
                    Repeater{
                        model:UiBridge.P1cards
                        Card{
                            imgpath:"back_dark"
                            height:30
                        }
                    }

                }
            }
            Item {
                x:parent.width/2 -width/2
                anchors.bottom:parent.bottom
                width:rrr.width
                height:rrr.height
                Crown{
                    visible:UiBridge.hakemId == 0
                    anchors.horizontalCenter:parent.horizontalCenter
                    anchors.bottom:parent.top
                }

                Row{
                    id : rrr
                    spacing:5

                    Repeater{
                        model:UiBridge.cards
                        Card{
                            width:cardsize*5/12
                            imgpath: modelData
                            property var temp1: modelData;
                            property var temp2: index;
                            MouseArea{
                                anchors.fill:parent
                                hoverEnabled:true
                                onEntered:{
                                    parent.y=-50
                                }
                                onExited:{
                                    parent.y=0
                                }
                                onClicked: {

                                    if (UiBridge.CardsOnTable[0]==""){

                                        UiBridge.selectCard(modelData)
                                        UiBridge.popCards(temp2)

                                    }
                                    else{
                                        UiBridge.insertCards(UiBridge.CardsOnTable[0])
                                        UiBridge.popCards(temp2)
                                        UiBridge.selectCard(temp1)
                                    }

                                }
                            }

                            Behavior on x {
                                enabled: true
                                NumberAnimation {
                                    id: xAnim
                                    duration: 100
                                    easing.type: Easing.InOutQuad
                                }
                            }

                            Behavior on y {
                                enabled: true
                                NumberAnimation {
                                    id: yAnim
                                    duration: 100
                                    easing.type: Easing.InOutQuad
                                }
                            }
                        }
                    }
                }

            }

        }

        Item {
            id: table
            width: parent.width/2
            height: parent.height/2
            anchors.centerIn: parent

            Card{
                imgpath: UiBridge.CardsOnTable[0]
                anchors.bottom: parent.bottom
                anchors.horizontalCenter: parent.horizontalCenter
            }
            Card{
                imgpath: UiBridge.CardsOnTable[1]
                anchors.right: parent.right
                anchors.verticalCenter: parent.verticalCenter
                rotation:90
            }
            Card{
                imgpath: UiBridge.CardsOnTable[2]
                anchors.top: parent.top
                anchors.horizontalCenter: parent.horizontalCenter
            }
            Card{
                imgpath: UiBridge.CardsOnTable[3]
                anchors.left: parent.left
                anchors.verticalCenter: parent.verticalCenter
                rotation:90
            }
        }
    }
    ScoreDisplay{

        anchors.top:parent.top
        anchors.right:parent.right
        width:250
        height:190
    }

    onClosing: {
        UiBridge.terminateall()
    }
}
