@interface IESLiveVideoGiftAudioDecoder : NSObject
- (void)configDecodeAudioFormat;
- (id)decodeFormat;
- (int)decodeIOData:inNumberFrames:;
- (id)initWithDemuxer:bufferSize:decodeBlock:processError:;
- (void)preprocessIfNeeded;
- (int)renderIOData:inNumberFrames:;
- (void)updateAudioPlaybackType:;
- (void)seekToTime:;
- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (BOOL)setup:;
@end
