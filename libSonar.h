#ifndef DEF_SONAR
#define DEF_SONAR

class Sonar
{
  public:
    Sonar();
    void init(int trigger1, int echo1, int vibDisc1, int trigger2, int echo2, int vibDisc2, int trigger3, int echo3, int vibDisc3);
    double distance1(int timeout1);
    double distance2(int timeout2);
    double distance3(int timeout3);

  private:
    void recordPulseLength1();
    void recordPulseLength2();
    void recordPulseLength3();
    int trigger1;
    int echo1;
    int trigger2;
    int echo2;
    int trigger3;
    int echo3;
    int vibDisc1;
    int vibDisc2;
    int vibDisc3;
    int detectRange;
    int vibInput1;
    int vibInput2;
    int vibInput3;
    volatile long startTimeUsec1;
    volatile long startTimeUsec2;
    volatile long startTimeUsec3;
    volatile long endTimeUsec1;
    volatile long endTimeUsec2;
    volatile long endTimeUsec3;
    double distanceMeters1;
    double distanceMeters2;
    double distanceMeters3;
    long travelTimeUsec1;
    long travelTimeUsec2;
    long travelTimeUsec3;
    long now1;
    long now2;
    long now3;
};

#endif
