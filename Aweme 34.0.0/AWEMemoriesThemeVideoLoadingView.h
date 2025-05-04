@interface AWEMemoriesThemeVideoLoadingView : UIView
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) UIView progressBG;
@property (nonatomic) UILabel progressLabel;
@property (nonatomic) double progress;
- (id)progressBG;
- (void)setProgressBG:;
- (id)initWithFrame:;
- (double)progress;
- (void).cxx_destruct;
- (void)reset;
- (id)gradientLayer;
- (void)setProgress:;
- (void)setGradientLayer:;
- (void)setupUI;
- (id)progressLabel;
- (void)updateProgress:;
- (void)setProgressLabel:;
@end
