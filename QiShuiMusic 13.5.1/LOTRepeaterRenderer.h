@interface LOTRepeaterRenderer : LOTRenderNode
- (id)initWithInputNode:shapeRepeater:;
- (BOOL)needsUpdateForFrame:;
- (void)performLocalUpdate;
- (void)recursivelyAddChildLayers:;
- (id)valueInterpolators;
- (void).cxx_destruct;
@end
