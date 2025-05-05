@interface MTLBufferLayoutDescriptorInternal : MTLBufferLayoutDescriptor
- (id)init;
- (void)setStepFunction:;
- (unsigned long long)stepRate;
- (unsigned long long)stride;
- (unsigned long long)stepFunction;
- (void)setStepRate:;
- (void)setStride:;
- (id)copyWithZone:;
@end
