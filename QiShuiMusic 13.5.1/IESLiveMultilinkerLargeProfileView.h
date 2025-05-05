@interface IESLiveMultilinkerLargeProfileView : UIView
@property (nonatomic) UILabel anchorLabel;
@property (nonatomic) UIView anchorView;
@property (nonatomic) UILabel nicknameLabel;
@property (nonatomic) IESLiveImageView muteImageView;
@property (nonatomic) IESLiveButton followButton;
@property (nonatomic) @? followBlock;
- (void)setAnchorLabel:;
- (void)setFollowBlock:;
- (id)anchorLabel;
- (id)followBlock;
- (id)followButton;
- (id)initWithDIContext:user:;
- (id)muteImageView;
- (void)onFollowButtonClicked;
- (void)setFollowButton:;
- (void)setMuteImageView:;
- (void).cxx_destruct;
- (id)anchorView;
- (void)setAnchorView:;
- (void)setupSubviews;
- (void)updateUserInfo:;
- (id)nicknameLabel;
- (void)setNicknameLabel:;
@end
