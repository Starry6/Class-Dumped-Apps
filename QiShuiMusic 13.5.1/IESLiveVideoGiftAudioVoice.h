@interface IESLiveVideoGiftAudioVoice : NSObject
- (BOOL)setupMixerUnit:;
- (void)configBPEAHandler;
- (void)configOutputAudioFormat;
- (BOOL)connectAudioUnits:;
- (id)initWithDecoder:configuration:processError:;
- (BOOL)isAudioGraphInitialized;
- (BOOL)isAudioGraphOpen;
- (BOOL)isAudioGraphRunning;
- (BOOL)setupConvertUnit:;
- (BOOL)setupIOUnit:;
- (void)seekToTime:;
- (void)dealloc;
- (void)play;
- (void)setVolume:;
- (void)stop;
- (void).cxx_destruct;
- (void)pause;
- (BOOL)setup:;
@end
