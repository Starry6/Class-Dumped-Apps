@interface CNContainerAccountIdentifierDescription : CNContainerPropertyDescription
- (Class)valueClass;
- (id)key;
- (BOOL)isWritable;
- (id)CNValueFromABValue:;
- (id)ABValueFromCNValue:;
- (id)CNValueForContainer:;
- (void)setCNValue:onContainer:;
- (int)abPropertyID;
- (id)ABValueForABSource:;
- (BOOL)setABValue:onABSource:error:;
@end
