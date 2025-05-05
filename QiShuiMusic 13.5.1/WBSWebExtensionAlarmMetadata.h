@interface WBSWebExtensionAlarmMetadata : NSObject
@property (nonatomic) WBSDispatchSourceTimer timer;
@property (nonatomic) NSDictionary dictionary;
@property (nonatomic) BOOL isValid;
- (id)dictionary;
- (void)setTimer:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)timer;
- (id)initWithName:scheduledTime:periodInMinutes:initialTimerScheduleSeconds:;
- (void)_scheduleWithHandler:;
@end
