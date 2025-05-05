@interface CNChangesNotifierProxy : NSObject
@property (nonatomic) BOOL forwardsSelfGeneratedDistributedSaveNotifications;
@property (nonatomic) double externalNotificationCoalescingDelay;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:;
- (void)waitForCurrentTasksToFinish;
- (void)setExternalNotificationCoalescingDelay:;
- (void).cxx_destruct;
- (BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
- (void)receiveNotificationName:fromSender:saveIdentifier:userInfo:isFromExternalProcess:;
- (void)receiveExternalNotificationName:;
- (double)externalNotificationCoalescingDelay;
@end
