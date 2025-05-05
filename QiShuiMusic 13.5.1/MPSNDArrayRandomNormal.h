@interface MPSNDArrayRandomNormal : MPSNDArrayRandom
@property (nonatomic) I samplingMethod;
@property (nonatomic) float mean;
@property (nonatomic) float standardDeviation;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (void)setStandardDeviation:;
- (id)initWithDevice:;
- (float)standardDeviation;
- (id)initWithDevice:mean:standardDeviation:;
- (float)mean;
- (void)setMean:;
- (unsigned int)samplingMethod;
- (void)setSamplingMethod:;
@end
