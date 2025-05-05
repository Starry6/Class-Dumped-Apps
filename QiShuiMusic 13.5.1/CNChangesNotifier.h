@interface CNChangesNotifier : NSObject
@property (nonatomic) CNChangesNotifierProxy notifierProxy;
- (void)dealloc;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:;
- (void)waitForCurrentTasksToFinish;
- (void)didSaveChangesSuccessfully:fromContactStore:requestIdentifier:;
- (void)setExternalNotificationCoalescingDelay:;
- (void).cxx_destruct;
- (void)willSaveChanges;
- (BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
- (id)notifierProxy;
- (id)initWithNotificationWrapper:schedulerProvider:loggerProvider:;
- (void)setNotifierProxy:;
- (void)didChangeMeContactSuccessfully:fromContactStore:requestIdentifier:;
+ (void)flushSharedNotifier;
+ (id)sharedNotifierWithNotificationWrapper:schedulerProvider:loggerProvider:;
+ (id)sharedNotifier;
@end
