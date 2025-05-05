@interface AMSFamilyContentDeletionEvent : NSObject
+ (void)postDistributedNotificationWithAccountPairs:;
+ (id)_notificationPayloadWithAccountPairs:;
@end
