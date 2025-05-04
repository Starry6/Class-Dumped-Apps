@interface AWEIMTaskPipelineNode : NSObject
@property (nonatomic) NSMutableArray targets;
@property (nonatomic) @? executeBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addTargetNode:;
- (void)continueWithContext:;
- (void)setExecuteBlock:;
- (id)targets;
- (void)setTargets:;
- (id)init;
- (id)executeBlock;
- (void).cxx_destruct;
- (void)executeWithContext:completion:;
@end
