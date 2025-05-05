@interface VCSessionParticipantAudioStreamConfig : VCAudioStreamConfig
@property (nonatomic) VCAudioRuleCollection audioRules;
@property (nonatomic) VCAudioRuleCollection audioRulesNegotiated;
- (void)dealloc;
- (id)audioRulesNegotiated;
- (void)setAudioRulesNegotiated:;
- (id)audioRules;
- (void)setAudioRules:;
@end
