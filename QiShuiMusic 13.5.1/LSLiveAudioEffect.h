@interface LSLiveAudioEffect : NSObject
- (BOOL)convertFloatDataWithAudioBuffer:inAudioBuffer:;
- (void)convertIntDataForAudioBuffer:inAudioData:numberOfChannels:samplesPerChannel:;
- (void)enableCleaner:;
- (void)enableCompressor:;
- (void)enableExciter:;
- (id)initWithSampleRate:channels:useFloat:;
- (BOOL)needProcess;
- (void)processBuffer:samplePerCh:;
- (void)processBufferList:;
- (void)updateAudioCleanerFormat:;
- (void)updateCompressFormat:;
- (void)updateEqualizerFormat:;
- (void)updateExciterFormat:;
- (void)updateReverb2Format:;
- (void)updateReverbFormat:;
- (void)updateStereoWiden:;
- (void)dealloc;
- (void).cxx_destruct;
@end
