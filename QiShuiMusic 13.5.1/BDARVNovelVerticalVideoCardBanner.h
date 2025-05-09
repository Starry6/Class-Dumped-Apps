@interface BDARVNovelVerticalVideoCardBanner : UIView
@property (nonatomic) UIImageView avatar;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel sourceLabel;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) UILabel avatarLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) <BDARVNovelVerticalVideoCardBannerDelegate> delegate;
@property (nonatomic) BDARVADModel adModel;
@property (nonatomic) NSString btnColorString;
- (void)actionBtnClick:;
- (void)setSourceLabel:;
- (id)adModel;
- (void)setAvatarLabel:;
- (id)avatarLabel;
- (id)btnColorString;
- (void)closeBtnClick:;
- (id)getDefaultAvatarImage;
- (void)setAdModel:;
- (void)setBtnColorString:;
- (void)setTitleLabel:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (id)tapGesture;
- (id)titleLabel;
- (id)avatar;
- (void)setAvatar:;
- (id)actionButton;
- (void)setActionButton:;
- (void)setupSubviews;
- (id)sourceLabel;
- (double)labelWidth;
- (id)closeButton;
- (void)setCloseButton:;
- (void)setTapGesture:;
- (void)tapAction:;
@end
