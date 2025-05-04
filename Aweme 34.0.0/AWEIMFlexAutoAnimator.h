@interface AWEIMFlexAutoAnimator : NSObject
@property (nonatomic) <AWEIMFlexAnimatorProtocol> realAnimator;
@property (nonatomic) BOOL enableLayoutWithAnimation;
@property (nonatomic) BOOL enqueUITask;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)p_isAnimatorEnable:presenter:;
- (BOOL)isAnimatorEnableForPresenter:;
- (void)setRealAnimator:;
- (id)realAnimator;
- (void)presenter:willBeginAnimationWithView:;
- (void)presenter:doingAnimationWithView:;
- (void)presenter:didEndAnimationWithView:;
- (BOOL)enableLayoutWithAnimation;
- (void)setEnableLayoutWithAnimation:;
- (BOOL)enqueUITask;
- (void)setEnqueUITask:;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
