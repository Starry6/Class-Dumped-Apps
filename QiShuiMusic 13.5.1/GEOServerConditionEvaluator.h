@interface GEOServerConditionEvaluator : NSObject
+ (BOOL)evaluateCondition:;
+ (id)serverFormattedStringByEvaluatingConditionsInString:;
@end
