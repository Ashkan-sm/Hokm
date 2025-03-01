#include "scoregridclass.h"

ScoreGridClass::ScoreGridClass(QObject *parent)
    : QObject{parent}
{}

int ScoreGridClass::YourScore() const
{
    return m_YourScore;
}

void ScoreGridClass::setYourScore(int newYourScore)
{
    if (m_YourScore == newYourScore)
        return;
    m_YourScore = newYourScore;
    emit YourScoreChanged();
}

int ScoreGridClass::OpnScore() const
{
    return m_OpnScore;
}

void ScoreGridClass::setOpnScore(int newOpnScore)
{
    if (m_OpnScore == newOpnScore)
        return;
    m_OpnScore = newOpnScore;
    emit OpnScoreChanged();
}

int ScoreGridClass::YourGameScore() const
{
    return m_YourGameScore;
}

void ScoreGridClass::setYourGameScore(int newYourGameScore)
{
    if (m_YourGameScore == newYourGameScore)
        return;
    m_YourGameScore = newYourGameScore;
    emit YourGameScoreChanged();
}

int ScoreGridClass::OpnGameScore() const
{
    return m_OpnGameScore;
}

void ScoreGridClass::setOpnGameScore(int newOpnGameScore)
{
    if (m_OpnGameScore == newOpnGameScore)
        return;
    m_OpnGameScore = newOpnGameScore;
    emit OpnGameScoreChanged();
}




