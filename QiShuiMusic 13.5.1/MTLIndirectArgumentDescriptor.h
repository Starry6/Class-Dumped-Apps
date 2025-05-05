@interface MTLIndirectArgumentDescriptor : MTLArgumentDescriptor
@property (nonatomic) Q dataType;
@property (nonatomic) Q index;
@property (nonatomic) Q arrayLength;
@property (nonatomic) Q access;
@property (nonatomic) Q textureType;
@property (nonatomic) Q constantBlockAlignment;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
+ (id)indirectArgumentDescriptor;
@end
