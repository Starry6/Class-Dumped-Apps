@interface NSDistributedNotificationCenter : NSNotificationCenter
@property (nonatomic) BOOL suspended;
- (id)init;
- (void)removeObserver:name:object:;
- (BOOL)suspended;
- (void)postNotification:;
- (id)addObserverForName:object:queue:usingBlock:;
- (void)addObserver:selector:name:object:;
- (void)setSuspended:;
- (void)postNotificationName:object:;
- (void)postNotificationName:object:userInfo:;
- (void)addObserver:selector:name:object:suspensionBehavior:;
- (id)addObserverForName:object:suspensionBehavior:queue:usingBlock:;
- (void)postNotificationName:object:userInfo:options:;
- (void)postNotificationName:object:userInfo:deliverImmediately:;
+ (void)_sf_postPerSitePreferencesDidChangeDistributedNotification;
+ (id)defaultCenter;
+ (id)notificationCenterForType:;
@end
