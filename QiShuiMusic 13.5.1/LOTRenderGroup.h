@interface LOTRenderGroup : LOTRenderNode
@property (nonatomic) CALayer containerLayer;
- (void)buildContents:;
- (id)initWithInputNode:contents:keyname:;
- (BOOL)needsUpdateForFrame:;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (void)searchNodesForKeypath:;
- (void)setPathShouldCacheLengths:;
- (void)setValueDelegate:forKeypath:;
- (BOOL)updateWithFrame:withModifierBlock:forceLocalUpdate:;
- (id)valueInterpolators;
- (void).cxx_destruct;
- (id)localPath;
- (id)outputPath;
- (id)containerLayer;
@end
