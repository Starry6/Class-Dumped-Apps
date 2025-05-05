@interface CKStringValueValidator : CKPredicateValidatorInstance
@property (nonatomic) NSString value;
- (BOOL)validate:error:;
- (id)CKPropertiesDescription;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (id)initWithValue:;
@end
