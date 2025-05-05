@interface AWEPageSheetTransition : NSObject
@property (nonatomic) q transitionType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)animateDismissalTransition:;
- (void)animateDismissalTransitionInHorizonScreen:;
- (void)animatePresentationTransition:;
- (void)animatePresentationTransitionInHorizonScreen:;
- (id)initWithTransitionType:;
- (void)animateTransition:;
- (double)transitionDuration:;
- (void)setTransitionType:;
- (long long)transitionType;
@end
