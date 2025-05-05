@interface IMAutomaticEventNotificationQueue : IMEventNotificationQueue
- (void)_invokeEvent:;
- (void)_didProcessQueue;
- (void)_didAddNotification:;
- (void)_didCancelNotifications;
@end
