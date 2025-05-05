@interface SSProtocolConditionalEvaluator : NSObject
- (id)init;
- (void)dealloc;
- (id)dictionaryByEvaluatingConditions;
- (id)initWithDictionary:;
- (id)initWithDictionary:conditionalContext:;
- (id)_dictionaryByEvaluatingChildrenOfDictionary:withForcedValue:;
- (BOOL)_checkConditions:withOperator:;
- (id)_arrayByEvaluatingChildrenOfArray:withForcedValue:;
- (id)_dictionaryByEvaluatingDictionary:withForcedValue:;
- (id)dictionaryByRemovingConditions;
- (int)_logicalOperatorForString:;
- (id)_dictionaryByEvaluatingWithForcedValue:;
+ (id)defaultConditionalContext;
+ (void)setDefaultConditionalContext:;
@end
