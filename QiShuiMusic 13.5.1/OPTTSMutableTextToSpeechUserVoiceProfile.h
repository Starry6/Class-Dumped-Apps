@interface OPTTSMutableTextToSpeechUserVoiceProfile : OPTTSTextToSpeechUserVoiceProfile
@property (nonatomic) float pitch_mean;
@property (nonatomic) float pitch_std;
@property (nonatomic) float energy_mean;
@property (nonatomic) float energy_std;
@property (nonatomic) float duration_mean;
@property (nonatomic) float duration_std;
- (id)init;
- (id)copyWithZone:;
- (float)pitch_mean;
- (void)setPitch_mean:;
- (float)pitch_std;
- (void)setPitch_std:;
- (float)energy_mean;
- (void)setEnergy_mean:;
- (float)energy_std;
- (void)setEnergy_std:;
- (float)duration_mean;
- (void)setDuration_mean:;
- (float)duration_std;
- (void)setDuration_std:;
@end
