@interface MTLVisibleFunctionTableDescriptorInternal : MTLVisibleFunctionTableDescriptor
- (void)setForceResourceIndex:;
- (void)setResourceIndex:;
- (BOOL)forceResourceIndex;
- (unsigned long long)resourceIndex;
- (unsigned long long)functionCount;
- (id)formattedDescription:;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setFunctionCount:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
