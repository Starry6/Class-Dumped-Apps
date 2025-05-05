@interface MTLPipelineBufferDescriptorInternal : MTLPipelineBufferDescriptor
- (id)_descriptorPrivate;
- (BOOL)isDefault;
- (id)init;
- (void)dealloc;
- (id)formattedDescription:;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setMutability:;
- (unsigned long long)mutability;
@end
