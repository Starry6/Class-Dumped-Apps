@interface AWEIMFlexLayoutAnimator : NSObject
@property (nonatomic) NSMutableDictionary lastPresenterFrameMap;
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
- (id)lastPresenterFrameMap;
- (void)p_setFrameForPresenter:;
- (void)setLastPresenterFrameMap:;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
