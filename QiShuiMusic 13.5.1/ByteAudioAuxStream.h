@interface ByteAudioAuxStream : NSObject
@property (nonatomic) <ByteAudioAuxSinkDelegate> delegate;
- (int)pauseStream;
- (int)resumeStream;
- (int)setStreamFormat:;
- (void)releaseStream;
- (int)setValue:Value:;
- (void)setSinkDelegate:;
- (id)getReportStats;
- (void)setAudioSourceFile:;
- (void)addInputStreamNameForMix:;
- (void)clearInputStreamNameForMix;
- (int)pushAudioFrame:;
- (void)setDelegate:;
- (id)getValue:;
- (id)initWithName:;
- (id)getName;
- (unsigned int)getId;
- (int)startStream;
- (id)delegate;
- (void).cxx_destruct;
- (void)setGain:;
- (int)stopStream;
@end
