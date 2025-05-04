@interface AWEKnowledgeRuleEvaluator : NSObject
+ (id)applyOperator:left:right:;
+ (unsigned long long)evaluatePostfixExpression:withProvider:;
@end
