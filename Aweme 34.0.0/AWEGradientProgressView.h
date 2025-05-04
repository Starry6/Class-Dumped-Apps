@interface AWEGradientProgressView : UIView
@property (nonatomic) UIView backView;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) CABasicAnimation basicAnimation;
@property (nonatomic) double currentProgress;
@property (nonatomic) UIColor backgroundProgressColor;
@property (nonatomic) NSArray colorArr;
- (void)setBackgroundProgressColor:;
- (void)setColorArr:;
- (id)basicAnimation;
- (id)colorArr;
- (id)backgroundProgressColor;
- (void)updateProgress:withTime:;
- (void)setBasicAnimation:;
- (double)currentProgress;
- (id)initWithFrame:;
- (void)setCurrentProgress:;
- (id)backView;
- (void).cxx_destruct;
- (void)setBackView:;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setupView;
@end
