@interface CMSedentaryTimer_Internal : NSObject
@property (nonatomic) BOOL timerArmed;
- (id)init;
- (void)dealloc;
- (BOOL)_isActive;
- (void)_teardown;
- (void)_handleStartStopTimerResponse:withHandler:;
- (void)_handleAlarmDataResponse:withHandler:;
- (void)_registerForAlarmsWithHandler:;
- (BOOL)isTimerArmed;
- (void)setTimerArmed:;
@end
