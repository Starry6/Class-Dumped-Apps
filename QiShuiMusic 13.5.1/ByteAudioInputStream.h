@interface ByteAudioInputStream : NSObject
@property (nonatomic) <ByteAudioInputSinkDelegate> delegate;
- (int)setStreamFormat:;
- (void)releaseStream;
- (int)updateStreamFormat:;
- (int)setValue:Value:;
- (void)setSinkDelegate:;
- (id)getReportStats;
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
