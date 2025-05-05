@interface CSJLOTRenderNode : CSJLOTAnimatorNode
@property (nonatomic) CAShapeLayer outputLayer;
- (id)actionsForRenderLayer;
- (id)initWithInputNode:keyName:;
- (id)outputLayer;
- (void)performLocalUpdate;
- (void)rebuildOutputs;
- (void).cxx_destruct;
- (id)localPath;
- (id)outputPath;
@end
