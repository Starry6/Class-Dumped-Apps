@interface OPTTSTextToSpeechRequestProsodyTransferConfig : NSObject
@property (nonatomic) OPTTSTextToSpeechSpeechFeatureInputWave wave_data;
@property (nonatomic) OPTTSTextToSpeechUserVoiceProfile user_voice_profile;
@property (nonatomic) NSString user_voice_profile_url;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)wave_data;
- (id)user_voice_profile;
- (id)user_voice_profile_url;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
@end
