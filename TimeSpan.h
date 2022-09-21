/*
 * TimeSpan.h
 * TimeSpan interface.
 * Program 1
 * Tuesday,September 20, 2022
 * Shihua Yu
*/

using namespace std;

class TimeSpan
{
private:
    int second;
    int minute;
    int hour;

public:
    TimeSpan(int hour, int minute, int second);
    TimeSpan(int minute, int second);
    TimeSpan(int second);

    int getSecond() const;
    int getMinute() const;
    int getHour() const;

    bool setTime(int hour, int minute, int second);

    void round();

    TimeSpan operator+(const TimeSpan &);
    TimeSpan operator-(const TimeSpan &);
    TimeSpan operator+=(const TimeSpan &);
    TimeSpan operator-=(const TimeSpan &);
    TimeSpan operator--();

    bool operator==(const TimeSpan &);
    bool operator!=(const TimeSpan &);
    friend ostream &operator<<(ostream &, const TimeSpan &);
    friend istream &operator>>(istream &, TimeSpan &);
};
