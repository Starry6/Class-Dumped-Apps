@interface ByteAudioOutputStream : NSObject
@property (nonatomic) <ByteAudioOutputSinkDelegate> delegate;
- (int)setStreamFormat:;
- (void)releaseStream;
- (int)setValue:Value:;
- (void)setSinkDelegate:;
- (id)getReportStats;
- (void)setGain:fadeInterval:;
- (void)setDelegate:;
- (id)getValue:;
- (id)initWithName:;
- (id)getName;
- (unsigned int)getId;
- (int)setMute:;
- (int)startStream;
- (id)delegate;
- (void).cxx_destruct;
- (void)setGain:;
- (int)stopStream;
@end
