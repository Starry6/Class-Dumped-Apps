@interface MTLAttributeDescriptor : NSObject
@property (nonatomic) Q format;
@property (nonatomic) Q offset;
@property (nonatomic) Q bufferIndex;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
