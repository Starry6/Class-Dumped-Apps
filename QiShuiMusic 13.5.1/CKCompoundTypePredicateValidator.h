@interface CKCompoundTypePredicateValidator : CKPredicateValidatorInstance
@property (nonatomic) Q type;
- (void)setType:;
- (BOOL)validate:error:;
- (id)CKPropertiesDescription;
- (unsigned long long)type;
- (id)initWithType:;
@end
