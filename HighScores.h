
#ifndef _HIGH_SCORES_H_
#define _HIGH_SCORES_H_

class HighScores {
    static const int MAX_SCORES = 10;

public:
    HighScores();

    int getNumScores();

    void addScore(int score);
    int getScore(unsigned index);

private:
    int myNumScores;
    int myScores[MAX_SCORES];

    int findLocationToInsert(int newScore);
    void shiftUp(int fromIndex);
};

#endif