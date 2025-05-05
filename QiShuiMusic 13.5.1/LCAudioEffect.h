@interface LCAudioEffect : NSObject
@property (nonatomic) double volume;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)enableReverberation:;
- (void)feedProcessBuffer:sampleFrames:elementIndex:withMixerHandle:;
- (void)initializeLiveAudioEffect;
- (void)processAudioBufferList:inNumberFrames:;
- (double)volume;
- (void)dealloc;
- (void)setVolume:;
- (id)initWithConfig:;
- (void).cxx_destruct;
@end
