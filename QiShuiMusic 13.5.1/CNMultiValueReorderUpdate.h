@interface CNMultiValueReorderUpdate : CNMultiValueUpdate
@property (nonatomic) NSOrderedSet values;
- (id)values;
- (id)initWithValues:;
- (void).cxx_destruct;
- (id)description;
- (void)applyToMutableMultiValue:withIdentifierMap:;
- (BOOL)applyToABPerson:abmultivalue:propertyDescription:isUnified:logger:error:;
- (long long)compareIndexOfIdentifier:toIndexOfIdentifier:;
@end
