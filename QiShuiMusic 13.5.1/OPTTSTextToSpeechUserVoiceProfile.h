@interface OPTTSTextToSpeechUserVoiceProfile : NSObject
@property (nonatomic) float pitch_mean;
@property (nonatomic) float pitch_std;
@property (nonatomic) float energy_mean;
@property (nonatomic) float energy_std;
@property (nonatomic) float duration_mean;
@property (nonatomic) float duration_std;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (float)pitch_mean;
- (float)pitch_std;
- (float)energy_mean;
- (float)energy_std;
- (float)duration_mean;
- (float)duration_std;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
@end
