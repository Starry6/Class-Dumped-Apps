@interface AWEIMOfficialAccountCardView : UIView
@property (nonatomic) UIImageView profileAvatar;
@property (nonatomic) UIView nickNameView;
@property (nonatomic) UILabel nickNameLabel;
@property (nonatomic) UIView introView;
@property (nonatomic) UILabel introLabel;
@property (nonatomic) @? tapAvatarViewBlock;
- (id)nickNameLabel;
- (void)setNickNameLabel:;
- (void)setTapAvatarViewBlock:;
- (void)setupCardView;
- (id)tapAvatarViewBlock;
- (void)updateViewWithBackgroundImage:isBright:;
- (id)profileAvatar;
- (void)tapUserAvatar;
- (void)setProfileAvatar:;
- (id)nickNameView;
- (void)setNickNameView:;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupUI;
- (id)introLabel;
- (void)setIntroLabel:;
- (id)introView;
- (void)setIntroView:;
@end
