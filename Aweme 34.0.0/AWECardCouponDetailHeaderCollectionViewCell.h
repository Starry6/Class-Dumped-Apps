@interface AWECardCouponDetailHeaderCollectionViewCell : AWECardCouponCollectionViewCell
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) UIImageView backgroundMaskImageView;
@property (nonatomic) UIImageView logoImageView;
@property (nonatomic) UILabel couponNameLabel;
@property (nonatomic) UILabel merchantNameLabel;
@property (nonatomic) CAGradientLayer gradientLayer;
- (void)setMerchantNameLabel:;
- (id)merchantNameLabel;
- (id)couponNameLabel;
- (void)setCouponNameLabel:;
- (id)backgroundMaskImageView;
- (void)setBackgroundMaskImageView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)configureWithModel:;
- (void)setBackgroundImageView:;
- (id)logoImageView;
- (void)setLogoImageView:;
@end
