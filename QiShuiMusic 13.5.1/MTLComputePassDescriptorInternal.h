@interface MTLComputePassDescriptorInternal : MTLComputePassDescriptor
@property (nonatomic) I substreamCount;
@property (nonatomic) BOOL allowCommandEncoderCoalescing;
- (id)_descriptorPrivate;
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (id)sampleBufferAttachments;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)dispatchType;
- (void)setDispatchType:;
- (unsigned int)substreamCount;
- (void)setSubstreamCount:;
- (BOOL)allowCommandEncoderCoalescing;
- (void)setAllowCommandEncoderCoalescing:;
+ (id)computePassDescriptor;
@end
