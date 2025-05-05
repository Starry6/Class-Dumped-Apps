@interface DAiCalendarLogger : NSObject
- (void)logICSMessage:atLevel:;
- (void)registerWithiCalendar;
+ (id)sharedLogger;
@end
