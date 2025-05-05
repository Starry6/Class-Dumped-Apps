@interface LiveStreamAudioRecord : NSObject
@property (nonatomic) BOOL stopped;
@property (nonatomic) @? completionHandler;
@property (nonatomic) double duration;
@property (nonatomic) NSURL recordUrl;
@property (nonatomic) BOOL wavFormat;
- (id)LS_createFinalURL;
- (void)startWriting:ticketId:maxRecordingDuration:withCompleteHandler:;
- (void)finishWritingComplete:;
- (void)forceStopRecording;
- (id)initWithAudioDescription:;
- (void)pauseWriting;
- (int)processAudioBufferList:inNumberFrames:bufferDuration:;
- (id)recordUrl;
- (void)setRecordUrl:;
- (void)setWavFormat:;
- (id)uniqueURLWithPrefix:;
- (BOOL)wavFormat;
- (void)dealloc;
- (void)setCompletionHandler:;
- (void)setDuration:;
- (void).cxx_destruct;
- (void)setStopped:;
- (double)duration;
- (id)completionHandler;
- (BOOL)stopped;
@end
