@interface AWEUserSlidingNavbarButtonView : UIView
@property (nonatomic) AWEUserModel user;
@property (nonatomic) q status;
@property (nonatomic) MASConstraint followBtnLeftConstraint;
@property (nonatomic) AWEButton slidingMsgBtn;
@property (nonatomic) AWEButton slidingFollowBtn;
@property (nonatomic) @? msgBlock;
@property (nonatomic) @? followBlock;
- (void)setButtonStatus:;
- (id)followBlock;
- (void)setFollowBlock:;
- (void)followBtnClicked:;
- (void)refreshWithUser:;
- (void)refreshWithStatus:;
- (void)setMsgBlock:;
- (id)slidingFollowBtn;
- (id)slidingMsgBtn;
- (void)msgBtnClicked:;
- (id)msgBlock;
- (BOOL)p_needHideSendMsgButton;
- (id)followBtnLeftConstraint;
- (void)setFollowBtnLeftConstraint:;
- (void)setSlidingMsgBtn:;
- (void)setSlidingFollowBtn:;
- (id)user;
- (void)setUser:;
- (id)init;
- (void)setStatus:;
- (void)updateLayout;
- (void).cxx_destruct;
- (long long)status;
@end
