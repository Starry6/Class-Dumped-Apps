@interface OPTTSMutableTextToSpeechRequestProsodyTransferConfig : OPTTSTextToSpeechRequestProsodyTransferConfig
@property (nonatomic) OPTTSTextToSpeechSpeechFeatureInputWave wave_data;
@property (nonatomic) OPTTSTextToSpeechUserVoiceProfile user_voice_profile;
@property (nonatomic) NSString user_voice_profile_url;
- (id)init;
- (id)copyWithZone:;
- (id)wave_data;
- (void)setWave_data:;
- (id)user_voice_profile;
- (void)setUser_voice_profile:;
- (id)user_voice_profile_url;
- (void)setUser_voice_profile_url:;
@end
