@interface IESLiveVideoGiftAudioBuffer : NSObject
@property (nonatomic) ^{AudioBufferList=I[1{AudioBuffer=II^v}]} ioData;
@property (nonatomic) I inNumberFrames;
@property (nonatomic) I cacheSize;
@property (nonatomic) q type;
@property (nonatomic) I start;
- (void)giveBack;
- (unsigned int)inNumberFrames;
- (id)initWithFrameCount:channels:bytePerFrame:;
- (id)ioData;
- (void)setInNumberFrames:;
- (void)setIoData:;
- (void)setCacheSize:;
- (unsigned int)cacheSize;
- (void)setStart:;
- (void)dealloc;
- (unsigned int)start;
- (void)setType:;
- (long long)type;
@end
