@interface UISnapBehavior : UIDynamicBehavior
@property (nonatomic) {CGPoint=dd} snapPoint;
@property (nonatomic) double damping;
- (void)setDamping:;
- (id)init;
- (double)damping;
- (void).cxx_destruct;
- (id)description;
- (void)_associate;
- (void)_dissociate;
- (double)_frequency;
- (id)initWithItem:snapToPoint:;
- (double)_distance;
- (void)_setDistance:;
- (void)_setFrequency:;
- (void)setSnapPoint:;
- (id)snapPoint;
+ (BOOL)_isPrimitiveBehavior;
@end
