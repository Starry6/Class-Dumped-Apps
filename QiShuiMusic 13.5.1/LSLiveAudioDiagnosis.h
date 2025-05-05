@interface LSLiveAudioDiagnosis : NSObject
- (id)init:sampleRate:channels:maxBlockSize:modelFilePath:parameters:threshold:switchInfo:;
- (void)processBufferList:inNumberFrames:;
- (void)dealloc;
- (id)getResult;
@end
