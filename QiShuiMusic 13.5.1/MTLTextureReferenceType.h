@interface MTLTextureReferenceType : MTLType
@property (nonatomic) Q textureDataType;
@property (nonatomic) Q textureType;
@property (nonatomic) Q access;
@property (nonatomic) BOOL isDepthTexture;
+ (id)allocWithZone:;
+ (id)alloc;
@end
