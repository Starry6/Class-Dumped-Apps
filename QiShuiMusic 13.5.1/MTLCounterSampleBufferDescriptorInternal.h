@interface MTLCounterSampleBufferDescriptorInternal : MTLCounterSampleBufferDescriptor
- (unsigned long long)sampleCount;
- (unsigned long long)storageMode;
- (void)setSampleCount:;
- (void)setStorageMode:;
- (void)dealloc;
- (void)setLabel:;
- (unsigned long long)hash;
- (id)label;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)counterSet;
- (void)setCounterSet:;
@end
