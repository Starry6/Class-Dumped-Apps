@interface AWEPageSheetTransition : NSObject
@property (nonatomic) q transitionType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTransitionType:;
- (void)animatePresentationTransition:;
- (void)animateDismissalTransition:;
- (void)animatePresentationTransitionInHorizonScreen:;
- (void)animateDismissalTransitionInHorizonScreen:;
- (void)setTransitionType:;
- (long long)transitionType;
- (double)transitionDuration:;
- (void)animateTransition:;
@end
