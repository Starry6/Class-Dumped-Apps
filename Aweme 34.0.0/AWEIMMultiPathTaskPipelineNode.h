@interface AWEIMMultiPathTaskPipelineNode : NSObject
@property (nonatomic) NSMutableDictionary targets;
@property (nonatomic) @? executeBlock;
- (void)continueWithContext:;
- (void)setExecuteBlock:;
- (void)addTargetNode:atIndex:;
- (id)targets;
- (void)setTargets:;
- (id)init;
- (id)executeBlock;
- (void).cxx_destruct;
- (void)executeWithContext:completion:;
@end
