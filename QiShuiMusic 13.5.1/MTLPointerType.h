@interface MTLPointerType : MTLType
@property (nonatomic) Q elementType;
@property (nonatomic) Q access;
@property (nonatomic) Q alignment;
@property (nonatomic) Q dataSize;
@property (nonatomic) BOOL elementIsArgumentBuffer;
- (id)elementArrayType;
- (id)elementStructType;
+ (id)allocWithZone:;
+ (id)alloc;
@end
