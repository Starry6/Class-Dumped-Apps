@interface AMSFollowUp : NSObject
@property (nonatomic) FLFollowUpController followUpController;
@property (nonatomic) NSObject<OS_dispatch_queue> followUpQueue;
- (id)init;
- (id)postFollowUpItem:;
- (void)setFollowUpController:;
- (id)followUpController;
- (void).cxx_destruct;
- (id)clearFollowUpItem:;
- (id)clearFollowUpWithBackingIdentifier:;
- (id)clearFollowUpWithIdentifier:account:;
- (id)pendingFollowUps;
- (id)pendingFollowUpsForAccount:;
- (id)pendingFollowUpWithIdentifier:account:;
- (id)_pendingFollowUpWithBackingIdentifier:error:;
- (id)followUpQueue;
- (void)setFollowUpQueue:;
@end
