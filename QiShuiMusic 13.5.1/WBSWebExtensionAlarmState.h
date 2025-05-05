@interface WBSWebExtensionAlarmState : NSObject
- (void).cxx_destruct;
- (void)createAlarmWithName:alarmInfo:extension:;
- (void)getAlarmWithName:completionHandler:;
- (void)getAllAlarmsWithCompletionHandler:;
- (void)clearAlarmWithName:completionHandler:;
- (void)invalidateAlarms;
+ (id)_alarmInfoWithName:alarmInfo:;
@end
