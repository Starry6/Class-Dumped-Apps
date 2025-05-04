@interface AWEKnowledgeRuleParser : NSObject
+ (BOOL)isLeftAssociative:;
+ (long long)precedence:;
+ (id)toPostfix:;
@end
