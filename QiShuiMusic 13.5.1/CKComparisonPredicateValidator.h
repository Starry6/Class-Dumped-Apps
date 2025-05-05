@interface CKComparisonPredicateValidator : CKPredicateValidatorInstance
@property (nonatomic) <CKObjectValidating> modifierValidator;
@property (nonatomic) <CKObjectValidating> leftExpressionValidator;
@property (nonatomic) <CKObjectValidating> operatorValidator;
@property (nonatomic) <CKObjectValidating> optionsValidator;
@property (nonatomic) <CKObjectValidating> rightExpressionValidator;
- (void)setOptionsValidator:;
- (void)setOperatorValidator:;
- (id)optionsValidator;
- (BOOL)validate:error:;
- (void)setModifierValidator:;
- (id)modifierValidator;
- (id)CKPropertiesDescription;
- (void)setRightExpressionValidator:;
- (id)rightExpressionValidator;
- (void).cxx_destruct;
- (id)leftExpressionValidator;
- (void)setLeftExpressionValidator:;
- (id)operatorValidator;
@end
