@interface AWEEditAIProgressView : UIView
@property (nonatomic) UIView backView;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) CABasicAnimation basicAnimation;
@property (nonatomic) double currentProgress;
@property (nonatomic) UIColor backgroundProgressColor;
@property (nonatomic) NSArray colorArr;
@property (nonatomic) double progressCornerRadius;
- (void)setProgressCornerRadius:;
- (void)setBackgroundProgressColor:;
- (void)setColorArr:;
- (void)updateProgress:withTime:completion:;
- (id)basicAnimation;
- (id)colorArr;
- (id)backgroundProgressColor;
- (void)updateProgress:withTime:;
- (double)progressCornerRadius;
- (void)setBasicAnimation:;
- (double)currentProgress;
- (id)initWithFrame:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)setCurrentProgress:;
- (id)backView;
- (void).cxx_destruct;
- (void)setBackView:;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setupView;
@end
