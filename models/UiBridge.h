#ifndef PASOOR_UIBRIDGE_H
#define PASOOR_UIBRIDGE_H

#include <QObject>
#include <QCoreApplication>
#include <QQmlApplicationEngine>
#include <memory>
#include <set>
#include "scoregridclass.h"
#include <algorithm>

class UiBridge : public QObject{
    Q_OBJECT

    Q_PROPERTY(QVector<QString> cards READ cards WRITE setCards NOTIFY cardsChanged FINAL)
    Q_PROPERTY(int P1cards READ P1cards WRITE setP1cards NOTIFY P1cardsChanged FINAL)
    Q_PROPERTY(int P2cards READ P2cards WRITE setP2cards NOTIFY P2cardsChanged FINAL)
    Q_PROPERTY(int P3cards READ P3cards WRITE setP3cards NOTIFY P3cardsChanged FINAL)
    Q_PROPERTY(QVector<QString> CardsOnTable READ CardsOnTable WRITE setCardsOnTable NOTIFY CardsOnTableChanged FINAL)
    Q_PROPERTY(QChar UiHokm READ UiHokm WRITE setUiHokm NOTIFY UiHokmChanged FINAL)


    Q_PROPERTY(ScoreGridClass* Scoregird READ Scoregird NOTIFY ScoregirdChanged)
    Q_PROPERTY(int hakemId READ hakemId WRITE setHakemId NOTIFY nameHakemId FINAL)


    UiBridge();
    ~UiBridge(){}

    static UiBridge* m_instance;

public:
    QVector<QString> cards() const;
    void setCards(const QVector<QString> &newCards);
    void setCardsString(const std::set<std::string> &newCards);

    int P1cards() const;
    void setP1cards(int newP1cards);

    int P2cards() const;
    void setP2cards(int newP2cards);

    int P3cards() const;
    void setP3cards(int newP3cards);


    int KhalValue(const std::string &);

    static UiBridge& getInstance();

    static QObject *qmlInstance(QQmlEngine *engine, QJSEngine *scriptEngine)
    {
        Q_UNUSED(engine);
        Q_UNUSED(scriptEngine);

        return &UiBridge::getInstance();
    }


    QVector<QString> CardsOnTable() const;
    void setCardsOnTable(const QVector<QString> &newCardsOnTable);


    QChar UiHokm() const;
    void setUiHokm(QChar newUiHokm);


    ScoreGridClass *Scoregird() const;

    int hakemId() const;
    void setHakemId(int newHakemId);

signals:

    void cardsChanged();

    void P1cardsChanged();

    void P2cardsChanged();

    void P3cardsChanged();

    void CardsOnTableChanged();

    void UiHokmChanged();


    void ScoregirdChanged();

    void nameHakemId();


public slots:
    void selectCard(QString);
    void popCards(int);
    void insertCards(QString);
    void terminateall();


private:
    int valueOfCard(char val);
    QVector<QString> m_cards;
    int m_P1cards{13};
    int m_P2cards{13};
    int m_P3cards{13};
    QVector<QString> m_CardsOnTable;
    QChar m_UiHokm{' '};

    ScoreGridClass *m_Scoregird = new ScoreGridClass();
    int m_hakemId{std::rand()%4};


    void SortCards();
};


#endif //PASOOR_UIBRIDGE_H
