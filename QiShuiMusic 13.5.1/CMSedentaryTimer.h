@interface CMSedentaryTimer : NSObject
@property (nonatomic) CMSedentaryTimer_Internal _internal;
- (id)_internal;
- (id)init;
- (void)dealloc;
- (BOOL)isActive;
- (void)startTimerWithStartTime:periodInterval:reminderInterval:autoReschedule:handler:;
- (void)stopTimerWithHandler:;
- (void)queryAlarmDataSince:withHandler:;
- (void)registerForAlarmsWithHandler:;
+ (BOOL)isAvailable;
@end
