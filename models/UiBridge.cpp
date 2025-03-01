#include "UiBridge.h"
UiBridge* UiBridge::m_instance = nullptr;

UiBridge::UiBridge(){
    for ( int i=0 ; i <4 ; i++){
        m_CardsOnTable.push_back("");
    }
}

QVector<QString> UiBridge::cards() const
{
    return m_cards;
}

void UiBridge::setCards(const QVector<QString> &newCards)
{
    if (m_cards == newCards)
        return;
    m_cards = newCards;
    emit cardsChanged();
}

void UiBridge::setCardsString(const std::set<std::string> &newCards)
{

    m_cards.clear();
    for(auto i : newCards){
        m_cards.push_back(QString::fromStdString(i));
    }
    SortCards();

    emit cardsChanged();

}

int UiBridge::P1cards() const
{
    return m_P1cards;
}

void UiBridge::setP1cards(int newP1cards)
{
    if (m_P1cards == newP1cards)
        return;
    m_P1cards = newP1cards;
    emit P1cardsChanged();
}

int UiBridge::P2cards() const
{
    return m_P2cards;
}

void UiBridge::setP2cards(int newP2cards)
{
    if (m_P2cards == newP2cards)
        return;
    m_P2cards = newP2cards;
    emit P2cardsChanged();
}

int UiBridge::P3cards() const
{
    return m_P3cards;
}

void UiBridge::setP3cards(int newP3cards)
{
    if (m_P3cards == newP3cards)
        return;
    m_P3cards = newP3cards;
    emit P3cardsChanged();
}

UiBridge &UiBridge::getInstance()
{

    // If the instance doesn't exist, create it
    if (!m_instance) {
        m_instance = new UiBridge();
    }
    return *m_instance;

}

QVector<QString> UiBridge::CardsOnTable() const
{
    return m_CardsOnTable;
}

void UiBridge::setCardsOnTable(const QVector<QString> &newCardsOnTable)
{
    if (m_CardsOnTable == newCardsOnTable)
        return;
    m_CardsOnTable = newCardsOnTable;
    emit CardsOnTableChanged();
}

void UiBridge::selectCard(QString card_name)
{
    m_CardsOnTable[0]=card_name;
    emit CardsOnTableChanged();
}

void UiBridge::popCards(int i)
{

    m_cards.remove(i);

    emit cardsChanged();
}

void UiBridge::insertCards(QString newCard)
{
    m_cards.push_back(newCard);
    emit cardsChanged();
}

void UiBridge::terminateall()
{

    std::terminate();
}

int UiBridge::valueOfCard(char val)
{


    int value=0;
    if (val=='0')
        value=10;
    else if (val=='J')
        value=11;
    else if (val=='Q')
        value=12;
    else if (val=='K')
        value=13;
    else if (val=='A')
        value=14;
    else
        value=val-'0';
    return value;


}

void UiBridge::SortCards()
{
    std::sort(m_cards.begin(),m_cards.end(),[&](const QString &a,const QString &b){    int ka=KhalValue(a.toStdString()),kb=KhalValue(b.toStdString());
    if(ka<kb){
        return true;
    }
    else if(ka==kb){
        return valueOfCard(a[a.size()-1].toLatin1())<valueOfCard(b[b.size()-1].toLatin1());
    }

    return false;});
    emit cardsChanged();
}

int UiBridge::KhalValue(const std::string &a){
    if(a[0]=='h')
        return 0;
    if(a[0]=='s')
        return 1;
    if(a[0]=='d')
        return 2;
    if(a[0]=='c')
        return 3;
}


QChar UiBridge::UiHokm() const
{
    return m_UiHokm;
}

void UiBridge::setUiHokm(QChar newUiHokm)
{
    if (m_UiHokm == newUiHokm)
        return;
    m_UiHokm = newUiHokm;
    emit UiHokmChanged();
}

ScoreGridClass *UiBridge::Scoregird() const
{
    return m_Scoregird;
}




int UiBridge::hakemId() const
{
    return m_hakemId;
}

void UiBridge::setHakemId(int newHakemId)
{
    if (m_hakemId == newHakemId)
        return;
    m_hakemId = newHakemId;
    emit nameHakemId();
}
