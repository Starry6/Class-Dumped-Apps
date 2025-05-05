@interface MTLArrayType : MTLType
@property (nonatomic) Q elementType;
@property (nonatomic) Q arrayLength;
@property (nonatomic) Q stride;
@property (nonatomic) Q argumentIndexStride;
- (id)elementArrayType;
- (id)elementIndirectArgumentType;
- (id)elementStructType;
- (id)elementPointerType;
- (id)elementTextureReferenceType;
+ (id)allocWithZone:;
+ (id)alloc;
@end
