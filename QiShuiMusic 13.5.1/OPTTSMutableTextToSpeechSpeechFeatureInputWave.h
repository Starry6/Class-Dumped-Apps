@interface OPTTSMutableTextToSpeechSpeechFeatureInputWave : OPTTSTextToSpeechSpeechFeatureInputWave
@property (nonatomic) NSInteger sample_rate;
@property (nonatomic) NSData pcm_data;
- (id)init;
- (id)copyWithZone:;
- (int)sample_rate;
- (void)setSample_rate:;
- (id)pcm_data;
- (void)setPcm_data:;
- (void)pcm_data:;
@end
