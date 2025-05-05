@interface AVCTestMonitorInjectAudioConfig : NSObject
@property (nonatomic) NSInteger injectAudioConfigType;
@property (nonatomic) double amplitude;
@property (nonatomic) NSString audioFileName;
@property (nonatomic) double startHostTime;
@property (nonatomic) double loopLength;
- (void)setAmplitude:;
- (double)amplitude;
- (double)startHostTime;
- (void)setStartHostTime:;
- (int)injectAudioConfigType;
- (void)setInjectAudioConfigType:;
- (id)audioFileName;
- (void)setAudioFileName:;
- (double)loopLength;
- (void)setLoopLength:;
@end
