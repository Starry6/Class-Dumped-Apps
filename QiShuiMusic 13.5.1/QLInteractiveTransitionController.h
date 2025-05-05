@interface QLInteractiveTransitionController : QLTransitionController
@property (nonatomic) double completeProgress;
@property (nonatomic) double completionSpeed;
@property (nonatomic) q completionCurve;
@property (nonatomic) BOOL wantsInteractiveStart;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)transitionDuration:;
- (void)startInteractiveTransition:;
- (void)updateTransitionWithProgress:;
- (void)completeTransition:withDuration:;
- (void)_performForcedDismissal;
- (void)setCompleteProgress:;
- (void)updateTransitionWithProgress:isFinal:;
- (double)completeProgress;
@end
