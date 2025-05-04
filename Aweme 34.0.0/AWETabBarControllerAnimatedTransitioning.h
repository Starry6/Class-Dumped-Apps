@interface AWETabBarControllerAnimatedTransitioning : NSObject
@property (nonatomic) BOOL isLeftIn;
@property (nonatomic) double transitionDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isLeftIn;
- (void)setIsLeftIn:;
- (double)transitionDuration:;
- (double)transitionDuration;
- (id)description;
- (void)animateTransition:;
- (void)setTransitionDuration:;
@end
