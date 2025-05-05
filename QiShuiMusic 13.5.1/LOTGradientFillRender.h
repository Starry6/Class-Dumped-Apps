@interface LOTGradientFillRender : LOTRenderNode
- (id)actionsForRenderLayer;
- (id)initWithInputNode:shapeGradientFill:;
- (BOOL)needsUpdateForFrame:;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (id)valueInterpolators;
- (void).cxx_destruct;
@end
