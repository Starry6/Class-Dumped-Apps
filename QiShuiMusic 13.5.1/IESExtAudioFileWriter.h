@interface IESExtAudioFileWriter : NSObject
@property (nonatomic) BOOL stopped;
@property (nonatomic) double duration;
@property (nonatomic) NSURL recordUrl;
- (void)finishWritingComplete:;
- (id)finishWritingSync;
- (id)initWithAudioDescription:config:;
- (void)pauseWriting;
- (int)processAudioBufferList:inNumberFrames:bufferDuration:;
- (int)processAudioBufferListSync:inNumberFrames:bufferDuration:;
- (id)recordUrl;
- (void)resetDuration;
- (void)setRecordUrl:;
- (void)startWriting;
- (void)dealloc;
- (void)setDuration:;
- (void).cxx_destruct;
- (void)setStopped:;
- (double)duration;
- (BOOL)stopped;
+ (BOOL)HEAACEncodingAvailable;
@end
