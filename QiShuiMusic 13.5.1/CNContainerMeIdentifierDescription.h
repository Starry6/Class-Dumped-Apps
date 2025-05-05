@interface CNContainerMeIdentifierDescription : CNContainerPropertyDescription
- (Class)valueClass;
- (id)key;
- (BOOL)isWritable;
- (id)CNValueFromABValue:;
- (id)ABValueFromCNValue:;
- (id)CNValueForContainer:;
- (void)setCNValue:onContainer:;
- (int)abPropertyID;
@end
