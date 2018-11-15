#ifndef TIMER_H
#define TIMER_H
EXTERN_VAR int timerv;
void startTimer(void);
void writeTime(const char* s);

int initTimer();
int  getTimer();
EXTERN_VAR int rtimerv;
void startRTimer(void);
void writeRTime(const char* s);

void initRTimer();
int  getRTimer();

void SetTimerResolution(int res);
void SetMinDisplayTime(double mtime);

#endif
