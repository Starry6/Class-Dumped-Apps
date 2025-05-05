@interface IESECStoreGoodsCardStatusView : UIView
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) UIView iconBackgroundView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) Q type;
@property (nonatomic) BOOL useExternalImage;
- (id)iconBackgroundView;
- (void)setGifImageURLModel:;
- (void)setIconBackgroundView:;
- (void)setImageURLModel:;
- (void)setUseExternalImage:;
- (void)updateIconImageView;
- (BOOL)useExternalImage;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void)setType:;
- (void)setTitle:;
- (id)initWithFrame:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)iconImageView;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setGradientLayer:;
- (void)setupViews;
@end
