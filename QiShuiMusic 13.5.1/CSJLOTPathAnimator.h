@interface CSJLOTPathAnimator : CSJLOTAnimatorNode
- (id)initWithInputNode:shapePath:;
- (BOOL)needsUpdateForFrame:;
- (void)performLocalUpdate;
- (id)valueInterpolators;
- (void).cxx_destruct;
@end
