@interface VEAudioInputUnit : VEAudioBaseUnit
- (void)downSampleData:;
- (void)processBufferList:nulldatasize:time:;
- (void)processCMSampleBuffer:nulldatasize:;
- (void)processNullData:time:;
@end
