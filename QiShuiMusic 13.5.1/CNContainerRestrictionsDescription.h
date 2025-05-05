@interface CNContainerRestrictionsDescription : CNContainerPropertyDescription
- (Class)valueClass;
- (id)key;
- (BOOL)isWritable;
- (id)CNValueFromABValue:;
- (id)ABValueFromCNValue:;
- (BOOL)isValidValue:error:;
- (id)CNValueForContainer:;
- (void)setCNValue:onContainer:;
- (int)abPropertyID;
- (BOOL)isConvertibleABValue:;
- (BOOL)setABValue:onABSource:error:;
@end
