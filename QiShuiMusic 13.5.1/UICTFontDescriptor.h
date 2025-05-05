@interface UICTFontDescriptor : UIFontDescriptor
- (id)matchingFontDescriptorWithMandatoryKeys:;
- (BOOL)allowsWeakReference;
- (id)fontAttributes;
- (id)matchingFontDescriptorsWithMandatoryKeys:;
- (unsigned long long)hash;
- (id)release;
- (BOOL)retainWeakReference;
- (id)retain;
- (unsigned long long)_cfTypeID;
- (id)fontDescriptorByAddingAttributes:;
- (id)objectForKey:;
- (unsigned long long)retainCount;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)fontDescriptorWithFontAttributes:;
+ (id)fontDescriptorWithName:size:;
+ (id)fontDescriptorWithName:matrix:;
@end
