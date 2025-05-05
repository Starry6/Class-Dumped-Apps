@interface MTLAttributeDescriptorInternal : MTLAttributeDescriptor
- (void)setFormat:;
- (void)setOffset:;
- (unsigned long long)format;
- (unsigned long long)bufferIndex;
- (void)setBufferIndex:;
- (unsigned long long)offset;
- (id)copyWithZone:;
@end
