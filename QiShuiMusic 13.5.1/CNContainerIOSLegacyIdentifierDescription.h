@interface CNContainerIOSLegacyIdentifierDescription : CNContainerPropertyDescription
- (Class)valueClass;
- (id)key;
- (BOOL)isWritable;
- (id)CNValueForContainer:;
- (void)setCNValue:onContainer:;
- (id)ABValueForABSource:;
- (BOOL)setABValue:onABSource:error:;
@end
