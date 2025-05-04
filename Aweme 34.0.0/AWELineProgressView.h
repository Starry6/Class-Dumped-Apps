@interface AWELineProgressView : UIView
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) double progressValue;
@property (nonatomic) BOOL hasCornerRadius;
@property (nonatomic) NSArray colorArrs;
@property (nonatomic) UIColor progressColor;
@property (nonatomic) Q direction;
- (void)updateProgressValue:totalValue:animated:;
- (id)progressViewRect;
- (double)progressViewCornerRadius;
- (id)colorArrs;
- (void)setColorArrs:;
- (void)setHasCornerRadius:;
- (id)init;
- (double)progressValue;
- (unsigned long long)direction;
- (void)setDirection:;
- (void).cxx_destruct;
- (void)setProgressValue:;
- (void)layoutSubviews;
- (id)gradientLayer;
- (id)progressColor;
- (void)setGradientLayer:;
- (void)setProgress:animated:;
- (void)setProgressColor:;
- (BOOL)hasCornerRadius;
@end
