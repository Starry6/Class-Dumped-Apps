@interface MTLRasterizationRateLayerDescriptorInternal : MTLRasterizationRateLayerDescriptor
- (id)sampleCount;
- (id)init;
- (void)setSampleCount:;
- (void)dealloc;
- (id)formattedDescription:;
- (unsigned long long)hash;
- (id)vertical;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithSampleCount:;
- (id)initWithSampleCount:horizontal:vertical:;
- (id)maxSampleCount;
- (id)horizontalSampleStorage;
- (id)verticalSampleStorage;
- (id)horizontal;
@end
