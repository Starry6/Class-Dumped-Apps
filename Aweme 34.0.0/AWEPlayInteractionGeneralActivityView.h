@interface AWEPlayInteractionGeneralActivityView : UIView
@property (nonatomic) AWEPlayInteractionGeneralActivityButton firstButton;
@property (nonatomic) AWEPlayInteractionGeneralActivityButton secondButton;
@property (nonatomic) @? activityButtonPressBlock;
- (id)activityButtonPressBlock;
- (void)activityButtonPressed:;
- (void)updateWithActivityButtonModel:delayShowTime:videoDuration:context:;
- (void)setActivityButtonPressBlock:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setFirstButton:;
- (id)firstButton;
- (id)secondButton;
- (void)setSecondButton:;
@end
