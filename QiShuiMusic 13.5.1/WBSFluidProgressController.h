@interface WBSFluidProgressController : NSObject
@property (nonatomic) <WBSFluidProgressControllerDelegate> delegate;
@property (nonatomic) <WBSFluidProgressControllerWindowDelegate> windowDelegate;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)unregisterObserver:;
- (void)registerObserver:;
- (void)cancelFluidProgressWithProgressStateSource:;
- (void)startFluidProgressWithProgressStateSource:;
- (void)finishFluidProgressWithProgressStateSource:;
- (void)sendProgressUpdateToObservers:progressStateSource:;
- (void)progressStateSourceDidCommitLoad:loadingSingleResource:;
- (void)setWindowDelegate:;
- (void)updateFluidProgressWithProgressStateSource:;
- (void)startRocketEffectWithProgressStateSource:;
- (void)frontmostTabDidChange;
- (void)animationStepCompleted:;
- (id)windowDelegate;
- (void)_updateFluidProgressWithProgressStateSource:;
- (void)_sendUpdateFluidProgressToObservers:progressState:source:updateAnimationPhase:;
@end
