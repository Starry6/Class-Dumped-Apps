@interface BWAdaptiveBracketingFrameParameters : NSObject
@property (nonatomic) NSInteger integrationTimeInMiroseconds;
@property (nonatomic) double integrationTimeInSeconds;
@property (nonatomic) float gain;
@property (nonatomic) NSInteger maxAGC;
- (float)gain;
- (int)integrationTimeInMiroseconds;
- (double)integrationTimeInSeconds;
- (int)maxAGC;
+ (id)frameParametersWithIntegrationTimeInSeconds:gain:maxAGC:;
+ (id)frameParametersWithIntegrationTimeInMicroseconds:gain:maxAGC:;
@end
