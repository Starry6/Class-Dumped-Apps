@interface AWEFeedLongPressPinchHotAreaGuideView : UIView
@property (nonatomic) LOTAnimationView swipeDownLottieView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) @? completionBlock;
- (void)showGuideOnView:;
- (void)hideGuideIfNeed;
- (id)swipeDownLottieView;
- (void)setSwipeDownLottieView:;
- (void)resetGuideView;
- (id)textLabel;
- (id)init;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (void)setupUI;
@end
