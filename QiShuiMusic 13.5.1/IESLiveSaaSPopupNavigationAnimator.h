@interface IESLiveSaaSPopupNavigationAnimator : NSObject
@property (nonatomic) BOOL pushing;
@property (nonatomic) double transitionDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithPushing:transitionDuration:;
- (void)setPushing:;
- (void)animateTransition:;
- (double)transitionDuration:;
- (double)transitionDuration;
- (void)setTransitionDuration:;
- (BOOL)pushing;
@end
