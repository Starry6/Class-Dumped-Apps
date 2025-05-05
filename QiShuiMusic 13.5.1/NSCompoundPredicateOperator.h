@interface NSCompoundPredicateOperator : NSPredicateOperator
- (id)minimalFormInContext:ofPredicates:;
- (id)predicateFormat;
- (id)symbol;
- (id)copyWithZone:;
- (BOOL)evaluatePredicates:withObject:;
- (BOOL)evaluatePredicates:withObject:substitutionVariables:;
+ (id)andPredicateOperator;
+ (id)orPredicateOperator;
+ (id)notPredicateOperator;
@end
