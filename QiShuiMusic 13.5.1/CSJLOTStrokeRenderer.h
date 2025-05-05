@interface CSJLOTStrokeRenderer : CSJLOTRenderNode
- (void)_updateLineDashPatternsForFrame:;
- (id)actionsForRenderLayer;
- (id)initWithInputNode:shapeStroke:;
- (BOOL)needsUpdateForFrame:;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (id)valueInterpolators;
- (void).cxx_destruct;
@end
