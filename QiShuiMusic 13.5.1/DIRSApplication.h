@interface DIRSApplication : NSObject
@property (nonatomic) NSString launchID;
@property (nonatomic) q applicationState;
- (id)_notificationiSelMapping;
- (void)_updateApplicationState;
- (id)launchID;
- (void)setLaunchID:;
- (id)init;
- (void)setApplicationState:;
- (void)commonInit;
- (long long)applicationState;
- (void)_notify:;
- (void)_observeNotifications;
- (void).cxx_destruct;
+ (id)sharedApplication;
@end
