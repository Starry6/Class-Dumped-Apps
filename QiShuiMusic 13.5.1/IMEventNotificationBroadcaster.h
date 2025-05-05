@interface IMEventNotificationBroadcaster : IMEventNotificationQueue
- (void)_didProcessQueue;
- (void)_willProcessQueue;
- (void)broadcastEventToListeners:;
@end
