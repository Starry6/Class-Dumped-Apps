@interface MTLRenderPassSampleBufferAttachmentDescriptorInternal : MTLRenderPassSampleBufferAttachmentDescriptor
- (id)_descriptorPrivate;
- (id)init;
- (void)dealloc;
- (id)sampleBuffer;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setSampleBuffer:;
- (unsigned long long)startOfVertexSampleIndex;
- (unsigned long long)endOfVertexSampleIndex;
- (unsigned long long)startOfFragmentSampleIndex;
- (unsigned long long)endOfFragmentSampleIndex;
- (void)setStartOfVertexSampleIndex:;
- (void)setEndOfVertexSampleIndex:;
- (void)setStartOfFragmentSampleIndex:;
- (void)setEndOfFragmentSampleIndex:;
@end
