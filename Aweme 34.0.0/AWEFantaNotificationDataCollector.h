@interface AWEFantaNotificationDataCollector : AWEFantaAbstractDataCollector
- (void)registerNotification:;
- (id)type;
- (void)onNotification:;
+ (id)sharedInstance;
@end
