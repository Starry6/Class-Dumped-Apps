@interface HTSLiveRuleDetail : IESLivePBBaseMessage
@property (nonatomic) HTSLiveAstRuleDetail astRule;
@property (nonatomic) BOOL hasAstRule;
@property (nonatomic) NSString jsonRule;
+ (id)descriptor;
@end
