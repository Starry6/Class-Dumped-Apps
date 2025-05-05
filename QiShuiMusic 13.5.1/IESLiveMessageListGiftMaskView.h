@interface IESLiveMessageListGiftMaskView : UIView
@property (nonatomic) @? hideTask;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isAnimating;
- (void)dismissWithAnimation;
- (id)hideTask;
- (void)notifyAddedNewNode;
- (void)setHideTask:;
- (void)setIsShowing:;
- (void)setupBottomGradient;
- (void)showWithAnimation;
- (BOOL)isShowing;
- (BOOL)isAnimating;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)reset;
- (void)setIsAnimating:;
- (void)setupUI;
@end
