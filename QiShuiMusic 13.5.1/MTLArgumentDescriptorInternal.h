@interface MTLArgumentDescriptorInternal : MTLArgumentDescriptor
- (unsigned long long)arrayLength;
- (void)setDataType:;
- (unsigned long long)textureType;
- (unsigned long long)access;
- (id)init;
- (id)formattedDescription:;
- (unsigned long long)dataType;
- (unsigned long long)hash;
- (unsigned long long)index;
- (void)setAccess:;
- (void)setTextureType:;
- (void)setIndex:;
- (id)description;
- (void)setArrayLength:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)constantBlockAlignment;
- (void)setConstantBlockAlignment:;
+ (id)indirectArgumentDescriptor;
@end
