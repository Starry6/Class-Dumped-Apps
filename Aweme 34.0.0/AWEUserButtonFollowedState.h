@interface AWEUserButtonFollowedState : AWEUserButtonState
@property (nonatomic) AWEUserButtonFollowContext context;
- (void)unfollowUser;
- (void)onClickButton;
- (void)trackUnfollow;
- (id)init;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
