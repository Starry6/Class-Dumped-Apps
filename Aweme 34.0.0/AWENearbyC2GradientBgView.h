@interface AWENearbyC2GradientBgView : UIView
@property (nonatomic) CAGradientLayer bgGradientLayer;
@property (nonatomic) UIView bgView;
@property (nonatomic) BOOL isExpanding;
- (id)bgGradientLayer;
- (void)setBgGradientLayer:;
- (void)switchToGradient:;
- (BOOL)isExpanding;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)bgView;
- (void)setBgView:;
- (void)setupUI;
- (void)setIsExpanding:;
@end
