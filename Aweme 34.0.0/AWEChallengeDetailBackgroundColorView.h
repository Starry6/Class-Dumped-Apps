@interface AWEChallengeDetailBackgroundColorView : UIView
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) CAGradientLayer topGradientLayer;
- (void)setTopGradientLayer:;
- (void)updateBackgroundColorViewWithFrame:centerPercent:startColor:centerColor:endColor:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (id)topGradientLayer;
@end
