@interface MTLBlitPassDescriptorInternal : MTLBlitPassDescriptor
- (id)_descriptorPrivate;
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (id)sampleBufferAttachments;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)blitPassDescriptor;
@end
