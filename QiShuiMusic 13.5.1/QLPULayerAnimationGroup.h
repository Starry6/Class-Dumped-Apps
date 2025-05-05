@interface QLPULayerAnimationGroup : QLPUTimedAnimationGroup
@property (nonatomic) CALayer referenceLayer;
- (id)init;
- (id)referenceLayer;
- (void)updateAnimations;
- (void).cxx_destruct;
- (double)currentTime;
- (id)initWithReferenceLayer:;
@end
