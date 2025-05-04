@interface AWEAdOperationGuideStarView : UIView
@property (nonatomic) UIView foregroundStarView;
@property (nonatomic) UIView backgroundStarView;
@property (nonatomic) double currentScore;
@property (nonatomic) q numberOfStars;
@property (nonatomic) BOOL showWithAnimation;
- (id)createStarViewWithImage:;
- (void)setForegroundStarView:;
- (void)setBackgroundStarView:;
- (void)updateForgroundStarView;
- (id)backgroundStarView;
- (id)foregroundStarView;
- (BOOL)showWithAnimation;
- (double)currentScore;
- (void)setCurrentScore:;
- (void)setShowWithAnimation:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (long long)numberOfStars;
- (void)setNumberOfStars:;
@end
