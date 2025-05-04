@interface AWECardCouponFoldListCollectionViewCell : AWECardCouponCollectionViewCell
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) UILabel couponNameLabel;
@property (nonatomic) UILabel statusLabel;
@property (nonatomic) UILabel validDateLabel;
@property (nonatomic) UIImageView statusLabelBackgroundImageView;
@property (nonatomic) CAGradientLayer gradientLayer;
- (id)couponNameLabel;
- (void)setCouponNameLabel:;
- (id)validDateLabel;
- (void)setValidDateLabel:;
- (id)statusLabelBackgroundImageView;
- (void)setCouponStyleForValid:;
- (void)p_updateTextShadowWithIsDefaultImg:;
- (void)setStatusLabelBackgroundImageView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)configureWithModel:;
- (void)setStatusLabel:;
- (void)setBackgroundImageView:;
- (id)statusLabel;
+ (id)identifier;
@end
