@interface UIKeyboardKeySwipeTransition : UIKeyboardKeyplaneTransition
@property (nonatomic) NSArray startKeysOrdered;
@property (nonatomic) NSArray endKeysOrdered;
@property (nonatomic) NSArray startGeometries;
@property (nonatomic) NSArray transitionKeys;
@property (nonatomic) NSArray keyInfos;
@property (nonatomic) double previousProgress;
@property (nonatomic) BOOL disableMeshOptimization;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)animationDidStop:finished:;
- (void)removeAllAnimations;
- (void).cxx_destruct;
- (void)updateWithProgress:;
- (void)rebuildWithStartKeyplane:startView:endKeyplane:endView:;
- (void)commitTransitionRebuild;
- (double)nonInteractiveDuration;
- (void)runNonInteractivelyWithCompletion:;
- (void)_runTransformAnimation;
- (void)_runOpacityAnimation;
- (void)gatherTransitionKeys;
- (id)keyRectForFrame:normalizedSubRect:;
- (id)meshTransformForKeyplane:forward:initial:;
- (BOOL)disableMeshOptimization;
- (void)setDisableMeshOptimization:;
- (id)startKeysOrdered;
- (void)setStartKeysOrdered:;
- (id)endKeysOrdered;
- (void)setEndKeysOrdered:;
- (id)startGeometries;
- (void)setStartGeometries:;
- (id)transitionKeys;
- (void)setTransitionKeys:;
- (id)keyInfos;
- (void)setKeyInfos:;
- (double)previousProgress;
- (void)setPreviousProgress:;
@end
