@interface MTLRasterizationRateMapDescriptorInternal : MTLRasterizationRateMapDescriptor
@property (nonatomic) BOOL skipSampleValidationAndInterpolation;
@property (nonatomic) BOOL skipSampleValidationAndApplySampleAtTileGranularity;
@property (nonatomic) Q mutability;
@property (nonatomic) float minFactor;
- (id)init;
- (id)dealloc;
- (id)layers;
- (id)formattedDescription:;
- (void)setLabel:;
- (unsigned long long)hash;
- (id)label;
- (id)screenSize;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setMutability:;
- (id)initWithScreenSize:;
- (id)layerPointer:;
- (BOOL)skipSampleValidationAndInterpolation;
- (void)setSkipSampleValidationAndInterpolation:;
- (BOOL)skipSampleValidationAndApplySampleAtTileGranularity;
- (void)setSkipSampleValidationAndApplySampleAtTileGranularity:;
- (unsigned long long)mutability;
- (float)minFactor;
- (void)setMinFactor:;
- (id)layerAtIndex:;
- (void)setLayer:atIndex:;
- (unsigned long long)layerCount;
- (void)setScreenSize:;
@end
