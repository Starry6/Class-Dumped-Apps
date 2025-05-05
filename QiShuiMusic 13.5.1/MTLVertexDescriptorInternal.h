@interface MTLVertexDescriptorInternal : MTLVertexDescriptor
- (id)init;
- (id)layouts;
- (void)dealloc;
- (id)formattedDescription:;
- (unsigned long long)hash;
- (BOOL)validateWithVertexFunction:error:renderPipelineDescriptor:;
- (id)attributes;
- (id)newSerializedDescriptor;
- (void)reset;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)vertexDescriptor;
@end
