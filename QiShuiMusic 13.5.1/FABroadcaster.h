@interface FABroadcaster : NSObject
+ (void)broadcastFamilyChangedNotification;
+ (void)broadcastFamilyMarqueeChangedNotification;
+ (void)broadcastServicesChangedNotification;
+ (void)broadcastRemoteUIWillDismissNotification:;
+ (void)_broadcastNotificationName:userInfo:;
@end
