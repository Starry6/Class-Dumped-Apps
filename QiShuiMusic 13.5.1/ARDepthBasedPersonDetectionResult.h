@interface ARDepthBasedPersonDetectionResult : ARPersonDetectionResult
@property (nonatomic) double initialBoundingBoxAvg;
@property (nonatomic) Q numberOfSamples;
- (id)initWithCoder:;
- (unsigned long long)numberOfSamples;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (float)meanValue;
- (id)initWithBoundingBox:;
- (void)addSampleValue:;
- (void)addSampleValueWithHighConfidence:;
- (double)initialBoundingBoxAvg;
- (void)setInitialBoundingBoxAvg:;
@end
