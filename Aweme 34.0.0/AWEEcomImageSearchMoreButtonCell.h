@interface AWEEcomImageSearchMoreButtonCell : UICollectionViewCell
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) CAGradientLayer effectGradientLayer;
@property (nonatomic) NSDictionary searchParams;
- (void)configWithModel:;
- (id)tipsLabel;
- (id)searchParams;
- (void)setSearchParams:;
- (void)setTipsLabel:;
- (void)configUI;
- (void)trackCardClick;
- (void)setSearchInfoDict:;
- (id)effectGradientLayer;
- (void)setEffectGradientLayer:;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)willDisplay;
+ (double)heightForModel:containerWidth:;
+ (id)identifier;
@end
