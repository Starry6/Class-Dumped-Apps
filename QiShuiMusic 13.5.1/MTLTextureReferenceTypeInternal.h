@interface MTLTextureReferenceTypeInternal : MTLTextureReferenceType
- (unsigned long long)textureType;
- (BOOL)isDepthTexture;
- (unsigned long long)access;
- (void)dealloc;
- (id)formattedDescription:;
- (id)initWithDataType:textureType:access:isDepthTexture:;
- (unsigned long long)dataType;
- (unsigned long long)textureDataType;
@end
