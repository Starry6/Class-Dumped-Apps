@interface HTSLiveAstRuleDetail : IESLivePBBaseMessage
@property (nonatomic) NSString rule;
@property (nonatomic) HTSLiveASTNode root;
@property (nonatomic) BOOL hasRoot;
@property (nonatomic) NSString ruleKeyName;
+ (id)descriptor;
@end
