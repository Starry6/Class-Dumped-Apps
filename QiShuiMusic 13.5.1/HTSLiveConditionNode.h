@interface HTSLiveConditionNode : IESLivePBBaseMessage
@property (nonatomic) HTSLiveASTNode condition;
@property (nonatomic) BOOL hasCondition;
@property (nonatomic) HTSLiveASTNode then;
@property (nonatomic) BOOL hasThen;
@property (nonatomic) HTSLiveASTNode otherwise;
@property (nonatomic) BOOL hasOtherwise;
+ (id)descriptor;
@end
