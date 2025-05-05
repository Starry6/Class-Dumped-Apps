@interface IESAudioConverter : IESMMObject
@property (nonatomic) Q musicType;
@property (nonatomic) double duration;
@property (nonatomic) double currentTime;
@property (nonatomic) {AudioStreamBasicDescription=dIIIIIIII} destinationFormat;
@property (nonatomic) Q status;
@property (nonatomic) NSURL audioURL;
- (void)destory;
- (void)adjustTimeOffset:;
- (int)convertNewFile:fromTime:;
- (int)convertNewFile:fromTime:musicType:;
- (unsigned long long)musicType;
- (int)renderIOData:outputPacketSize:;
- (void)resetConverter;
- (void)setMusicType:;
- (void)switchMusicType:;
- (void)setCurrentTime:;
- (void)seekToTime:;
- (id)init;
- (void)dealloc;
- (id)initWithFormat:;
- (void)setDuration:;
- (void).cxx_destruct;
- (double)currentTime;
- (unsigned long long)status;
- (double)duration;
- (id)audioURL;
- (id)destinationFormat;
@end
