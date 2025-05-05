@interface LiveStreamParamBuilder : NSObject
- (BOOL)checkUpdateBoolValue:;
- (BOOL)checkUpdateFloatValue:;
- (BOOL)checkUpdateIntValue:;
- (void)enableSiti:;
- (void)enableVideoDenoise:;
- (void)setAudioBitrate:;
- (void)setBFrameBitrateRatio:;
- (void)setCapAdaptSize:;
- (void)setDefaultBitrate:minBitrate:maxBitrate:;
- (void)setVideoDenoiseBitrateRatios:ge1080pRatio:lt1080pRatio:;
- (void)updateSiti::;
- (id)init;
- (id)build;
- (void).cxx_destruct;
- (void)setSize:;
- (void)setFps:;
@end
