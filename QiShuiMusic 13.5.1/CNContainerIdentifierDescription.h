@interface CNContainerIdentifierDescription : CNContainerPropertyDescription
- (Class)valueClass;
- (BOOL)isNonnull;
- (id)key;
- (id)CNValueFromABValue:;
- (id)ABValueFromCNValue:;
- (id)CNValueForContainer:;
- (void)setCNValue:onContainer:;
- (int)abPropertyID;
@end
