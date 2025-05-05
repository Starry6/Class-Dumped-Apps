@interface MPSNDArrayInitializationTruncatedNormal : MPSNDArrayInitialization
@property (nonatomic) float mean;
@property (nonatomic) float standardDeviation;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (float)standardDeviation;
- (id)initWithDevice:sourceCount:;
- (float)mean;
- (unsigned long long)kernelDimensionalityForDestinationArray:;
- (id)initWithDevice:mean:standardDeviation:seed:;
@end
