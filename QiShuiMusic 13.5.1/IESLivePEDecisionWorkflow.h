@interface IESLivePEDecisionWorkflow : NSObject
@property (nonatomic) @? completion;
@property (nonatomic) NSDictionary featureSet;
@property (nonatomic) HTSLiveStrategyRule strategy;
@property (nonatomic) NSDictionary trigger;
- (BOOL)executeExpression:withFeatures:;
- (id)calculate:withFeatureSet:;
- (void)calculator:withBinaryNode:nodeQueue:;
- (void)calculator:withCallNode:nodeQueue:;
- (void)calculator:withConditionNode:nodeQueue:;
- (void)calculator:withUnaryNode:nodeQueue:;
- (void)executeAstRules:withFeatureSet:completion:;
- (void)executeConditionRule:withFeatureSet:completion:;
- (void)executeStrategy:withFeatureSet:completion:;
- (void)workflowCompleteWith:;
- (id)completion;
- (void)setCompletion:;
- (void)execute;
- (id)strategy;
- (void)setTrigger:;
- (id)trigger;
- (void).cxx_destruct;
- (void)setStrategy:;
- (id)featureSet;
- (void)setFeatureSet:;
@end
