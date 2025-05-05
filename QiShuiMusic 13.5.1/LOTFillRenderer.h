@interface LOTFillRenderer : LOTRenderNode
- (id)actionsForRenderLayer;
- (id)initWithInputNode:shapeFill:;
- (BOOL)needsUpdateForFrame:;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (id)valueInterpolators;
- (void).cxx_destruct;
@end
