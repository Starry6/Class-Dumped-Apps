@interface FAFollowupManager : NSObject
+ (void)teardownFollowUpWithContext:completion:;
+ (void)tearDownFollowupItemWithIdentifier:completion:;
+ (void)synchronizeFollowupWithPayload:altDSID:;
+ (void)teardownPendingFollowup;
+ (id)_followupManager;
@end
