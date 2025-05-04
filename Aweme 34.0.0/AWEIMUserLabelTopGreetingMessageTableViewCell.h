@interface AWEIMUserLabelTopGreetingMessageTableViewCell : AWEIMSystemMessageTableViewCell
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) AWEIMUITagLabelViewContainer tagContainerView;
@property (nonatomic) UIButton profileButton;
@property (nonatomic) BOOL didTrackProfileButtonShow;
- (void)p_refreshUI;
- (void)configWithMessage:;
- (id)profileButton;
- (void)onClickProfileButton:;
- (void)setProfileButton:;
- (id)tagContainerView;
- (id)__setupTagModels;
- (id)__buildTagModel;
- (void)transferToProfileWithAdditionalParams:;
- (void)setTagContainerView:;
- (BOOL)didTrackProfileButtonShow;
- (void)setDidTrackProfileButtonShow:;
- (void)setAvatarView:;
- (id)avatarView;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (void)setupUI;
- (void)avatarTapped:;
- (void)willDisplayCell;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end
