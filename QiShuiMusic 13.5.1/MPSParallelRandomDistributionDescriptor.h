@interface MPSParallelRandomDistributionDescriptor : NSObject
@property (nonatomic) Q distributionType;
@property (nonatomic) float minimum;
@property (nonatomic) float maximum;
@property (nonatomic) float mean;
@property (nonatomic) float standardDeviation;
- (float)minimum;
- (float)maximum;
- (void)setMinimum:;
- (void)setStandardDeviation:;
- (void)setMaximum:;
- (float)standardDeviation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (float)mean;
- (void)setMean:;
- (unsigned long long)distributionType;
- (void)setDistributionType:;
+ (id)uniformDistributionDescriptorWithMinimum:maximum:;
+ (id)normalDistributionDescriptorWithMean:standardDeviation:;
+ (id)normalDistributionDescriptorWithMean:standardDeviation:minimum:maximum:;
+ (id)defaultDistributionDescriptor;
@end
