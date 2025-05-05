@interface CNContactMultiValueDiffUpdate : CNContactUpdate
@property (nonatomic) CNMultiValuePropertyDescription property;
@property (nonatomic) CNMultiValueDiff diff;
- (id)property;
- (id)diff;
- (void).cxx_destruct;
- (id)description;
- (BOOL)applyToABPerson:withPropertiesContext:logger:error:;
- (void)applyToMutableContact:withIdentifierMap:;
- (id)initWithProperty:diff:;
@end
