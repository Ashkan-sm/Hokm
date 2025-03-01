#ifndef SCOREGRIDCLASS_H
#define SCOREGRIDCLASS_H

#include <QObject>

class ScoreGridClass : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int YourScore READ YourScore WRITE setYourScore NOTIFY YourScoreChanged FINAL)
    Q_PROPERTY(int OpnScore READ OpnScore WRITE setOpnScore NOTIFY OpnScoreChanged FINAL)
    Q_PROPERTY(int YourGameScore READ YourGameScore WRITE setYourGameScore NOTIFY YourGameScoreChanged FINAL)
    Q_PROPERTY(int OpnGameScore READ OpnGameScore WRITE setOpnGameScore NOTIFY OpnGameScoreChanged FINAL)
public:
    explicit ScoreGridClass(QObject *parent = nullptr);


    int YourScore() const;
    void setYourScore(int newYourScore);

    int OpnScore() const;
    void setOpnScore(int newOpnScore);

    int YourGameScore() const;
    void setYourGameScore(int newYourGameScore);

    int OpnGameScore() const;
    void setOpnGameScore(int newOpnGameScore);

signals:
    void YourScoreChanged();
    void OpnScoreChanged();

    void YourGameScoreChanged();

    void OpnGameScoreChanged();

    int getMOpnGameScore() const;

    void setMOpnGameScore(int mOpnGameScore);

private:
    int m_YourScore{0};
    int m_OpnScore{0};
    int m_YourGameScore{0};
    int m_OpnGameScore{0};
};

#endif // SCOREGRIDCLASS_H
