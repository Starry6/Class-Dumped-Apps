@interface ByteRTCVoiceReverbConfig : NSObject
@property (nonatomic) float roomSize;
@property (nonatomic) float decayTime;
@property (nonatomic) float damping;
@property (nonatomic) float wetGain;
@property (nonatomic) float dryGain;
@property (nonatomic) float preDelay;
- (float)roomSize;
- (void)setRoomSize:;
- (float)wetGain;
- (void)setWetGain:;
- (float)dryGain;
- (void)setDryGain:;
- (float)preDelay;
- (void)setPreDelay:;
- (void)setDamping:;
- (id)init;
- (float)damping;
- (void)setDecayTime:;
- (float)decayTime;
@end
