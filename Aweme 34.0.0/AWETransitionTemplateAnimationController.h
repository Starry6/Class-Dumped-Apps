@interface AWETransitionTemplateAnimationController : NSObject
@property (nonatomic) <AWETransitionContextProvider> contextProvider;
@property (nonatomic) BOOL didStartAnimation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)didStartAnimation;
- (void)setDidStartAnimation:;
- (double)transitionDuration:;
- (void)animateTransition:;
- (void).cxx_destruct;
- (id)contextProvider;
- (void)setContextProvider:;
+ (id)instanceWithContextProvider:;
@end
