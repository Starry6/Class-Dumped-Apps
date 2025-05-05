@interface AudioSource : NSObject
@property (nonatomic) BOOL audioMute;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)audioMute;
- (void)capturer:andNumberOfSample:andBytesPerSample:andNumberOfChannels:andSampleRate:andTimestampUs:andDelayMs:;
- (id)initWithNativeAudioSource:;
- (void)setAudioMute:;
- (void)setAudioSourceNil;
- (void)setNativeAudioSource:;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
