@interface BDXASafeEnvLoginViewController : BDXALoginViewController
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIButton tagView;
@property (nonatomic) UIButton otherLoginBtn;
- (void)layoutViewsForBottomSheet;
- (void)layoutViewsForFullScreen;
- (void)mainButtonTapped;
- (id)otherLoginBtn;
- (void)otherLoginBtnTapped;
- (void)setOtherLoginBtn:;
- (void)layoutViews;
- (void)setTitleLabel:;
- (id)avatarView;
- (void)setAvatarView:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)nameLabel;
- (void)setNameLabel:;
- (id)loginType;
- (id)tagView;
- (void)setTagView:;
@end
