/*
 * TimeSpan.cpp
 * TimeSpan class that represents a duration of time in hours, minutes, and seconds.
 * Program 1
 * Tuesday,September 20,2022
 * Shihua Yu
*/

using namespace std;

TimeSpan::TimeSpan(int hour, int minute, int second)
{
    this->hour = hour;
    this->minute = minute;
    this->second = second;

    this->round();
    0.41
    //3601 /3600 = 1 hour
    minute (3601 / 60)
}
TimeSpan::TimeSpan(int minute, int second)
{
    this->minute = minute;
    this->second = second;
    this->round();
}
TimeSpan::TimeSpan(int second)
{
    this->second = second;
    this->round();
}

int TimeSpan::getSecond() const
{
    return this->second;
}
int TimeSpan::getMinute() const
{
    return this->minute;
}
int TimeSpan::getHour() const
{
    return this->hour;
}

bool TimeSpan::setTime(int hour, int minute, int second)
{
    this->hour = hour;
    this->minute = minute;
    this->second = second;
    this->round();
    return true;
}

TimeSpan TimeSpan::operator+(const TimeSpan &another)
{
    TimeSpan res(this->hour + another.getHour(), this->minute + another.getMinute(), this->second + another.getSecond());
    return res;
}
TimeSpan TimeSpan::operator-(const TimeSpan &another)
{
    TimeSpan res(this->hour - another.getHour(), this->minute - another.getMinute(), this->second - another.getSecond());
    return res;
}
TimeSpan TimeSpan::operator+=(const TimeSpan &another)
{
    this->hour += another.getHour();
    this->minute += another.getMinute();
    this->second += another.getSecond();
    this->round();
    return *this;
}
TimeSpan TimeSpan::operator-=(const TimeSpan &another)
{
    this->hour -= another.getHour();
    this->minute -= another.getMinute();
    this->second -= another.getSecond();
    this->round();
    return *this;
}

TimeSpan TimeSpan::operator--()
{
    this->second--;
    this->round();
    return *this;
}


bool TimeSpan::operator==(const TimeSpan &another)
{
    return this->hour == another.getHour() && this->second == another.getSecond() && this->minute == another.getMinute();
}
bool TimeSpan::operator!=(const TimeSpan &another)
{
    return !this->operator==(another);
}

ostream &operator<<(ostream &os, const TimeSpan &ts)
{
    os << "Hours: " << ts.getHour() << ", Minutes: " << ts.getMinute() << ", Seconds: " << ts.getSecond();
    return os;
}
istream &operator>>(istream &is, TimeSpan &ts)
{
    int hour, minute, second;
    is >> hour;
    is >> minute;
    is >> second;
    ts.setTime(hour, minute, second);
    return is;
}
