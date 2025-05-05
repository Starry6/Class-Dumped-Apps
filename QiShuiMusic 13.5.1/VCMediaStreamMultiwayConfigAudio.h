@interface VCMediaStreamMultiwayConfigAudio : VCMediaStreamMultiwayConfig
@property (nonatomic) VCAudioRuleCollection audioRules;
@property (nonatomic) I preferredMediaBitrate;
- (void)dealloc;
- (id)audioRules;
- (void)setAudioRules:;
- (unsigned int)preferredMediaBitrate;
- (void)setPreferredMediaBitrate:;
@end
