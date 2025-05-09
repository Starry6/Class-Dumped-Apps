@interface AWETeenSearchResultUserView : UIView
@property (nonatomic) AWEUserModel user;
@property (nonatomic) AWETeenUserAvatarView avatarView;
@property (nonatomic) AWEBillboardLabel userNameLabel;
@property (nonatomic) UIButton tagButton;
@property (nonatomic) UILabel subscribeNumLabel;
@property (nonatomic) UILabel verifyLabel;
@property (nonatomic) UIButton subscribeButton;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) @? containerViewClickBlock;
@property (nonatomic) @? followButtonClickBlock;
- (void)setExtra:;
- (void)awe_themeDidChange:;
- (id)userNameLabel;
- (void)setUserNameLabel:;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (void)updateSubscribeStatus:subscribedCount:;
- (id)subscribeNumLabel;
- (void)setSubscribeNumLabel:;
- (void)configWithModel:extra:;
- (void)setFollowButtonClickBlock:;
- (void)setContainerViewClickBlock:;
- (id)containerViewClickBlock;
- (id)followButtonClickBlock;
- (void)p_containerViewClick;
- (void)p_updateBlockStatusWithStatus:verifyType:;
- (id)tagButton;
- (void)searchResultClickTrackerWithButtonType:;
- (id)followTrackerParams:;
- (void)p_subscribeButtonClick;
- (void)setTagButton:;
- (id)user;
- (void)setUser:;
- (void)setAvatarView:;
- (id)extra;
- (id)initWithFrame:;
- (id)avatarView;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setVerifyLabel:;
- (id)verifyLabel;
- (id)subscribeButton;
- (void)setSubscribeButton:;
@end
