@interface AWECommonUserListBaseSectionViewModel : AWERelationUserListBaseSectionViewModel
@property (nonatomic) NSString previousPage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishTopFollowingUser:status:;
- (void)didFinishUnTopFollowingUser:status:;
- (void)didFinishBlockUser:status:;
- (void)didFinishTapTAIsFriendWithUser:isFriend:;
- (void)didFinishSetRemarkWithUser:;
- (void)didFinishRemoveFansWithUser:;
- (void)setupViewModel;
- (void)unfollowUser:;
- (void)syncModelFollowStatus:status:;
- (void)onClickUnFollowUserOnProfileMenu:trackerParam:;
- (BOOL)isFriends;
- (void)dealloc;
- (long long)type;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:;
- (BOOL)isMine;
@end
