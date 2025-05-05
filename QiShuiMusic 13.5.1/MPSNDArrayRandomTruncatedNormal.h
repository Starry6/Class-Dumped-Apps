@interface MPSNDArrayRandomTruncatedNormal : MPSNDArrayRandom
@property (nonatomic) I samplingMethod;
@property (nonatomic) float mean;
@property (nonatomic) float standardDeviation;
@property (nonatomic) float minimum;
@property (nonatomic) float maximum;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (float)minimum;
- (float)maximum;
- (void)setMinimum:;
- (void)encodeWithCoder:;
- (void)setStandardDeviation:;
- (id)initWithDevice:;
- (void)setMaximum:;
- (float)standardDeviation;
- (id)initWithDevice:mean:standardDeviation:;
- (float)mean;
- (void)setMean:;
- (unsigned int)samplingMethod;
- (void)setSamplingMethod:;
@end
