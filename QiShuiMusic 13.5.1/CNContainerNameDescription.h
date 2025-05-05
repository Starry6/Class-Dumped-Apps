@interface CNContainerNameDescription : CNContainerPropertyDescription
- (BOOL)isNonnull;
- (id)key;
- (BOOL)isWritable;
- (id)CNValueForContainer:;
- (void)setCNValue:onContainer:;
- (int)abPropertyID;
@end
