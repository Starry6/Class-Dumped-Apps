@interface CNContactKeyValueUpdate : CNContactUpdate
@property (nonatomic) CNPropertyDescription property;
@property (nonatomic) @ value;
- (id)property;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (BOOL)isEqual:;
- (BOOL)applyToABPerson:withPropertiesContext:logger:error:;
- (void)applyToMutableContact:withIdentifierMap:;
- (id)initWithProperty:value:;
@end
