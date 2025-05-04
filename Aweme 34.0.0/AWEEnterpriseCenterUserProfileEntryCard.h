@interface AWEEnterpriseCenterUserProfileEntryCard : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) <AWEEnterpriseCenterUserProfileEntryCardDelegate> delegate;
- (void)configWithCardModel:;
- (id)delegate;
- (id)initWithFrame:;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setImageView:;
- (id)subtitleLabel;
- (id)imageView;
- (void)setupUI;
- (void)viewTapped;
@end
