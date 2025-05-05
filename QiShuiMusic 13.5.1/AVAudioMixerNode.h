@interface AVAudioMixerNode : AVAudioNode
@property (nonatomic) float outputVolume;
@property (nonatomic) Q nextAvailableInputBus;
@property (nonatomic) float volume;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setOutputVolume:;
- (unsigned long long)nextAvailableInputBus;
- (void)didAttachToEngine:;
- (void)setInputVolume:bus:;
- (float)outputVolume;
- (void)setInputPan:bus:;
- (void)inputConnected:;
@end
