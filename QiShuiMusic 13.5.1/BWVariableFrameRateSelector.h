@interface BWVariableFrameRateSelector : NSObject
@property (nonatomic) float suggestedFrameRate;
- (void)dealloc;
- (id)initWithPortTypes:forParameters:;
- (void)processSampleBuffer:frameStatistics:currentFrameRate:aeMaxGain:zoomInProgress:mostRecentInferenceResult:;
- (void)addAttachmentsToSamplebuffer:;
- (float)getAEMaxGainForPortType:suggestedFrameRate:;
- (float)suggestedFrameRate;
@end
