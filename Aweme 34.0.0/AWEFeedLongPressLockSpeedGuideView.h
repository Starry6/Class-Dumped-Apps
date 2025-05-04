@interface AWEFeedLongPressLockSpeedGuideView : UIView
@property (nonatomic) LOTAnimationView swipeDownLottieView;
@property (nonatomic) UILabel textLabel;
- (void)showGuideOnView:;
- (void)hideGuideIfNeed;
- (id)swipeDownLottieView;
- (void)setSwipeDownLottieView:;
- (void)resetGuideView;
- (id)textLabel;
- (id)init;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (void)setupUI;
@end
