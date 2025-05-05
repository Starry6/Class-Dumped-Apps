@interface CSJLOTTrimPathNode : CSJLOTAnimatorNode
- (id)initWithInputNode:trimPath:;
- (BOOL)needsUpdateForFrame:;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (BOOL)updateWithFrame:withModifierBlock:forceLocalUpdate:;
- (id)valueInterpolators;
- (void).cxx_destruct;
- (id)localPath;
- (id)outputPath;
@end
