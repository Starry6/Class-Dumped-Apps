@interface OPTTSTextToSpeechRequestProsodyControlConfig : NSObject
@property (nonatomic) float global_rate;
@property (nonatomic) float global_pitch;
@property (nonatomic) float global_energy;
@property (nonatomic) float global_sent_pitch;
@property (nonatomic) float global_sent_pitchrange;
@property (nonatomic) float global_sent_duration;
@property (nonatomic) float global_sent_energy;
@property (nonatomic) float global_sent_tilt;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (float)global_rate;
- (float)global_pitch;
- (float)global_energy;
- (float)global_sent_pitch;
- (float)global_sent_pitchrange;
- (float)global_sent_duration;
- (float)global_sent_energy;
- (float)global_sent_tilt;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
@end
