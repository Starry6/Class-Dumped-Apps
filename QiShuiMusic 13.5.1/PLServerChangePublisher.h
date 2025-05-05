@interface PLServerChangePublisher : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)_postWatchUpdateNotification;
- (id)publishChangeEvent:delayedSaveActionsDetail:transaction:;
- (void)_postWatchUpdateNotificationIfPending;
- (void)distributeChangeEvent:transaction:;
- (void)unpauseLaunchEventNotifications;
- (void)_postWatchUpdateNotificationIfNotPaused;
- (void)pauseLaunchEventNotifications;
- (void)_postChangeHubNotification;
@end
