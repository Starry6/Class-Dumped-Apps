@interface OPTTSMutableTextToSpeechRequestDebug : OPTTSTextToSpeechRequestDebug
@property (nonatomic) BOOL force_use_tts_service;
@property (nonatomic) BOOL disable_cache;
- (id)init;
- (id)copyWithZone:;
- (BOOL)force_use_tts_service;
- (void)setForce_use_tts_service:;
- (BOOL)disable_cache;
- (void)setDisable_cache:;
@end
