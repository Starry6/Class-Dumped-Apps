@interface CKAggregateExpressionValidator : CKPredicateValidatorInstance
@property (nonatomic) NSArray subExpressionValidators;
- (BOOL)validate:error:;
- (id)CKPropertiesDescription;
- (void)setSubExpressionValidators:;
- (void).cxx_destruct;
- (id)subExpressionValidators;
- (id)initWithValidators:;
@end
