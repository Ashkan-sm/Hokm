import QtQuick

Rectangle{

    property string imgpath: ""
    height:img.height
    width: img.width
    color:"transparent"

    Image {
        id:img
        fillMode: Image.PreserveAspectFit
        source: "resource/cards/" + imgpath + ".png"
        width:cardsize

    }

}
