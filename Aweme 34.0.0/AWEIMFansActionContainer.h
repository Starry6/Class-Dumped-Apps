@interface AWEIMFansActionContainer : AWEIMFansBaseContainer
@property (nonatomic) AWEIMFansFollowViewModel followViewModel;
@property (nonatomic) AWENoticeFollowButton followBtn;
@property (nonatomic) UIButton moreBtn;
@property (nonatomic) UIView disclosureIndicatorView;
@property (nonatomic) BOOL replyFriendIMShowTracked;
- (void)configWithViewModel:;
- (id)moreBtn;
- (void)setMoreBtn:;
- (id)followBtn;
- (void)setFollowBtn:;
- (id)disclosureIndicatorView;
- (void)setDisclosureIndicatorView:;
- (BOOL)replyFriendIMShowTracked;
- (void)setReplyFriendIMShowTracked:;
- (void)updateFollowBtnWithType:;
- (id)followViewModel;
- (void)setFollowButtonHidden:;
- (void)followBtnClicked:;
- (void)moreBtnDidClicked:;
- (id)accessibilityActions;
- (void)setFollowViewModel:;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setupViews;
- (void)setupLayout;
@end
