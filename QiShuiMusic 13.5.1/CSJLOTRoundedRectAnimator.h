@interface CSJLOTRoundedRectAnimator : CSJLOTAnimatorNode
- (void)addCorner:withRadius:toPath:clockwise:;
- (id)initWithInputNode:shapeRectangle:;
- (BOOL)needsUpdateForFrame:;
- (void)performLocalUpdate;
- (id)valueInterpolators;
- (void).cxx_destruct;
@end
