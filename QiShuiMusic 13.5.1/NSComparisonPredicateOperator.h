@interface NSComparisonPredicateOperator : NSPredicateOperator
- (id)minimalFormInContext:ofPredicate:;
- (BOOL)performPrimitiveOperationUsingObject:andObject:;
- (id)predicateFormat;
- (id)initWithCoder:;
- (unsigned long long)variant;
- (void)encodeWithCoder:;
- (unsigned long long)options;
- (id)initWithOperatorType:modifier:variant:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithOperatorType:modifier:variant:options:;
+ (BOOL)supportsSecureCoding;
@end
