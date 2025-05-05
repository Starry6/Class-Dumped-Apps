@interface CMActivityAlarmProxy : NSObject
- (id)init;
- (void)dealloc;
- (BOOL)activityAlarmAvailable;
- (void)stopListeningForActivityAlarm:;
- (void)listenForActivityAlarm:;
+ (id)sharedInstance;
@end
