@interface NSInPredicateOperator : NSPredicateOperator
- (id)minimalFormInContext:ofPredicate:;
- (void)_setOptions:;
- (BOOL)performPrimitiveOperationUsingObject:andObject:;
- (void)dealloc;
- (id)initWithCoder:;
- (id)symbol;
- (void)encodeWithCoder:;
- (unsigned long long)options;
- (unsigned long long)flags;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithOperatorType:modifier:options:;
- (id)stringVersion;
+ (BOOL)supportsSecureCoding;
@end
