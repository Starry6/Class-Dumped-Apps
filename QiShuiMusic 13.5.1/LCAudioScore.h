@interface LCAudioScore : NSObject
@property (nonatomic) BOOL isStart;
@property (nonatomic) NSLock startLock;
@property (nonatomic) NSInteger sampleRate;
- (id)getRealtimeInfo;
- (id)getMidiDrawingData;
- (id)initWithMidiFileName:lyricFileName:;
- (void)process:inNumberFrames:channels:;
- (void)setStartLock:;
- (void)setTranspose:;
- (id)startLock;
- (void)startScore;
- (void)stopScore;
- (void)dealloc;
- (int)sampleRate;
- (void)setIsStart:;
- (BOOL)isStart;
- (void).cxx_destruct;
- (void)setSampleRate:;
- (void)seek:;
@end
