@interface SSFollowUpController : NSObject
@property (nonatomic) FLFollowUpController followUpController;
- (id)init;
- (void)setFollowUpController:;
- (id)followUpController;
- (void).cxx_destruct;
- (id)dismissFollowUpWithIdentifier:;
- (id)dismissFollowUpWithIdentifier:account:;
- (id)pendingFollowUpWithIdentifier:;
- (id)postFollowUpWithIdentifier:account:userInfo:;
- (id)postFollowUpWithIdentifier:userInfo:;
- (id)_createFollowUpItemForIdentifier:userInfo:;
- (id)_createFollowUpItemForRenewCredentialsWithUserInfo:;
- (id)_dismissFollowUpWithIdentifier:;
- (id)_postFollowUpWithIdentifier:userInfo:;
+ (id)sharedController;
@end
