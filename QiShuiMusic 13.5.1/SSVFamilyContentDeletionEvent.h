@interface SSVFamilyContentDeletionEvent : NSObject
@property (nonatomic) NSArray deletedAccounts;
- (void).cxx_destruct;
- (id)initWithNotificationUserInfo:;
- (id)initWithXPCEventStreamEvent:;
- (id)deletedAccounts;
+ (void)postDistributedNotificationWithAccountPairs:;
+ (id)notificationPayloadWithAccountPairs:;
@end
