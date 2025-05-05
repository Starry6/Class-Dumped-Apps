@interface CKComparisonOperatorValidator : CKPredicateValidatorInstance
@property (nonatomic) Q operatorType;
- (BOOL)validate:error:;
- (id)initWithOperatorType:;
- (id)CKPropertiesDescription;
- (unsigned long long)operatorType;
- (void)setOperatorType:;
@end
