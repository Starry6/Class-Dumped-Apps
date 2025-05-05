@interface CKKeyPathExpressionValidator : CKPredicateValidatorInstance
@property (nonatomic) <CKObjectValidating> validator;
- (id)validator;
- (BOOL)validate:error:;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (void)setValidator:;
- (id)initWithValidator:;
@end
