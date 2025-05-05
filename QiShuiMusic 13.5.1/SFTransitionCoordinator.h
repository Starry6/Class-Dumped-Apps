@interface SFTransitionCoordinator : NSObject
@property (nonatomic) <SFTransitionCoordinating> publicCoordinator;
@property (nonatomic) BOOL requiresKeyframeAnimations;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isTransition;
@property (nonatomic) BOOL usesKeyframeAnimations;
- (void)addAnimations:;
- (void)addCompletion:;
- (void)addKeyframeWithRelativeStartTime:relativeDuration:animations:;
- (void).cxx_destruct;
- (void)addRetargetableAnimations:;
- (BOOL)isTransition;
- (BOOL)usesKeyframeAnimations;
- (id)initWithAnimations:completion:;
- (id)publicCoordinator;
- (void)invokeAnimations;
- (void)invokeCompletion;
- (void)performTransitionWithAnimation:inContextOfContainerView:;
- (BOOL)requiresKeyframeAnimations;
- (void)disableKeyframeAnimations;
@end
