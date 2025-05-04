@interface AWEIMFlexFadeAnimator : NSObject
@property (nonatomic) NSMutableArray tempShowViews;
@property (nonatomic) AWEIMFlexLayoutAnimator layoutAnimator;
@property (nonatomic) BOOL enableLayoutWithAnimation;
@property (nonatomic) BOOL enqueUITask;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isAnimatorEnableForPresenter:;
- (void)presenter:willBeginAnimationWithView:;
- (void)presenter:doingAnimationWithView:;
- (void)presenter:didEndAnimationWithView:;
- (BOOL)enableLayoutWithAnimation;
- (void)setEnableLayoutWithAnimation:;
- (BOOL)enqueUITask;
- (void)setEnqueUITask:;
- (id)layoutAnimator;
- (id)tempShowViews;
- (void)setTempShowViews:;
- (void)setLayoutAnimator:;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
