@interface MTLArgument : NSObject
@property (nonatomic) MTLArgument bufferIndirectArgumentType;
@property (nonatomic) Q indirectConstantAlignment;
@property (nonatomic) Q indirectConstantDataSize;
@property (nonatomic) Q indirectConstantDataType;
@property (nonatomic) NSString name;
@property (nonatomic) Q type;
@property (nonatomic) Q access;
@property (nonatomic) Q index;
@property (nonatomic) BOOL active;
@property (nonatomic) Q bufferAlignment;
@property (nonatomic) Q bufferDataSize;
@property (nonatomic) Q bufferDataType;
@property (nonatomic) MTLStructType bufferStructType;
@property (nonatomic) MTLPointerType bufferPointerType;
@property (nonatomic) Q threadgroupMemoryAlignment;
@property (nonatomic) Q threadgroupMemoryDataSize;
@property (nonatomic) Q textureType;
@property (nonatomic) Q textureDataType;
@property (nonatomic) BOOL isDepthTexture;
@property (nonatomic) Q arrayLength;
- (unsigned long long)indirectConstantAlignment;
- (unsigned long long)indirectConstantDataSize;
- (unsigned long long)indirectConstantDataType;
- (id)bufferIndirectArgumentType;
+ (id)allocWithZone:;
+ (id)alloc;
@end
