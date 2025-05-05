@interface LOTPolygonAnimator : LOTAnimatorNode
- (id)initWithInputNode:shapePolygon:;
- (BOOL)needsUpdateForFrame:;
- (void)performLocalUpdate;
- (id)valueInterpolators;
- (void).cxx_destruct;
@end
