@interface OPTTSTextToSpeechSpeechFeatureInputWave : NSObject
@property (nonatomic) NSInteger sample_rate;
@property (nonatomic) NSData pcm_data;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (int)sample_rate;
- (id)pcm_data;
- (void)pcm_data:;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
@end
