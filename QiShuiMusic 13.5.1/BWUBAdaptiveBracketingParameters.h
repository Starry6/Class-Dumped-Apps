@interface BWUBAdaptiveBracketingParameters : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (BOOL)stationary;
- (id)adaptiveBracketingFrameParametersForGroup:;
- (BOOL)generateWhiteBalanceParameters;
- (float)evZeroTargetGain;
- (float)previewSNR;
- (double)totalIntegrationTime;
- (double)totalIntegrationTimeForDigitalFlashMode:frameStatistics:stationary:detectedObjects:;
- (id)adaptiveBracketingParametersForDigitalFlashMode:;
@end
