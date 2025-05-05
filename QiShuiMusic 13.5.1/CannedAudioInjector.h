@interface CannedAudioInjector : NSObject
@property (nonatomic) BOOL readyToInject;
@property (nonatomic) NSString cannedMoviePath;
@property (nonatomic) NSMutableData samples;
@property (nonatomic) NSInteger position;
@property (nonatomic) BOOL fromBeginning;
- (id)samples;
- (void)setPosition:;
- (int)position;
- (void)dealloc;
- (void)setSamples:;
- (id)description;
- (id)initWithPath:withDescription:fromBeginning:startHostTime:loopLength:;
- (id)initWithPath:withDescription:startHostTime:loopLength:;
- (id)initWithPath:withDescription:fromBeginning:;
- (void)injectToBuffer:size:time:muted:;
- (void)setAudioConverterProcAudioBufferList:blockBuffer:;
- (void)cleanupAudioConverterProc;
- (int)decodeAudio;
- (int)readRawAudioSamples;
- (id)cannedMoviePath;
- (void)setCannedMoviePath:;
- (BOOL)fromBeginning;
- (void)setFromBeginning:;
- (BOOL)readyToInject;
- (void)setReadyToInject:;
+ (BOOL)isAudioAvailable:;
@end
