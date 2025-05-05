@interface WBSPasswordRuleParser : NSObject
+ (id)mergePasswordRuleSet:withPasswordRuleSet:;
+ (id)parsePasswordRules:error:;
+ (id)_passwordRuleSetFromPasswordRules:;
@end
