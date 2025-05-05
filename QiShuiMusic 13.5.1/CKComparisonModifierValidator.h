@interface CKComparisonModifierValidator : CKPredicateValidatorInstance
@property (nonatomic) Q modifier;
- (unsigned long long)modifier;
- (BOOL)validate:error:;
- (id)CKPropertiesDescription;
- (id)initWithModifier:;
- (void)setModifier:;
@end
