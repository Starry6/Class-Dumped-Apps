@interface CKAllPredicateValidator : CKPredicateValidatorInstance
@property (nonatomic) NSArray validators;
- (BOOL)validate:error:;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)validators;
- (void)setValidators:;
- (id)initWithValidators:;
@end
