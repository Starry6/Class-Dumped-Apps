@interface MTLVertexDescriptor : NSObject
@property (nonatomic) MTLVertexBufferLayoutDescriptorArray layouts;
@property (nonatomic) MTLVertexAttributeDescriptorArray attributes;
- (id)formattedDescription:;
- (void)reset;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
+ (id)vertexDescriptor;
@end
