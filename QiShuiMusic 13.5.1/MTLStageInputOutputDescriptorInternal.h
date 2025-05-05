@interface MTLStageInputOutputDescriptorInternal : MTLStageInputOutputDescriptor
- (void)setIndexType:;
- (id)init;
- (id)layouts;
- (void)dealloc;
- (id)formattedDescription:;
- (unsigned long long)hash;
- (BOOL)validateWithVertexFunction:error:renderPipelineDescriptor:;
- (id)attributes;
- (unsigned long long)indexType;
- (id)newSerializedDescriptor;
- (void)reset;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)indexBufferIndex;
- (void)setIndexBufferIndex:;
+ (id)vertexDescriptor;
@end
