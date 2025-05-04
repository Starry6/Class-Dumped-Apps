@interface AWEIMSpeedUpModalTransitionAnimator : NSObject
@property (nonatomic) BOOL dismiss;
@property (nonatomic) double transitionDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isDismiss;
- (id)initWithDismiss:;
- (double)transitionDuration:;
- (double)transitionDuration;
- (void)animateTransition:;
- (void)setTransitionDuration:;
- (void)setDismiss:;
@end
