@interface AWEEcomKolVideoBottomBarView : UIView
@property (nonatomic) UIView roundCornerView;
@property (nonatomic) DUXPluralAvatar avatars;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView expandImageView;
- (void)p_setupUI;
- (void)updateWithAwemeModel:;
- (void)setAvatars:;
- (id)roundCornerView;
- (id)expandImageView;
- (void)onTapBottomBar;
- (void)setRoundCornerView:;
- (void)setExpandImageView:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void)setHidden:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)avatars;
@end
