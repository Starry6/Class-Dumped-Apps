@interface OPTTSMutableTextToSpeechRequestProsodyControlConfig : OPTTSTextToSpeechRequestProsodyControlConfig
@property (nonatomic) float global_rate;
@property (nonatomic) float global_pitch;
@property (nonatomic) float global_energy;
@property (nonatomic) float global_sent_pitch;
@property (nonatomic) float global_sent_pitchrange;
@property (nonatomic) float global_sent_duration;
@property (nonatomic) float global_sent_energy;
@property (nonatomic) float global_sent_tilt;
- (id)init;
- (id)copyWithZone:;
- (float)global_rate;
- (void)setGlobal_rate:;
- (float)global_pitch;
- (void)setGlobal_pitch:;
- (float)global_energy;
- (void)setGlobal_energy:;
- (float)global_sent_pitch;
- (void)setGlobal_sent_pitch:;
- (float)global_sent_pitchrange;
- (void)setGlobal_sent_pitchrange:;
- (float)global_sent_duration;
- (void)setGlobal_sent_duration:;
- (float)global_sent_energy;
- (void)setGlobal_sent_energy:;
- (float)global_sent_tilt;
- (void)setGlobal_sent_tilt:;
@end
