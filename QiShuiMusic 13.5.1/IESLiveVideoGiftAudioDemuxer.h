@interface IESLiveVideoGiftAudioDemuxer : NSObject
@property (nonatomic) q readedPacket;
- (id)initWithURL:processError:;
- (int)readPacket:ioData:description:;
- (long long)readedPacket;
- (long long)readedSamples;
- (void)setReadedPacket:;
- (void)seekToTime:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)sourceFormat;
- (BOOL)setup:;
@end
