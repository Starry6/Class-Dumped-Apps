@interface OPTTSAudioDescription : NSObject
@property (nonatomic) double sample_rate;
@property (nonatomic) I format_id;
@property (nonatomic) I format_flags;
@property (nonatomic) I bytes_per_packet;
@property (nonatomic) I frames_per_packet;
@property (nonatomic) I bytes_per_frame;
@property (nonatomic) I channels_per_frame;
@property (nonatomic) I bits_per_channel;
@property (nonatomic) I reserved;
- (unsigned int)reserved;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (double)sample_rate;
- (unsigned int)format_id;
- (unsigned int)format_flags;
- (unsigned int)bytes_per_packet;
- (unsigned int)frames_per_packet;
- (unsigned int)bytes_per_frame;
- (unsigned int)channels_per_frame;
- (unsigned int)bits_per_channel;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
- (id)audioStreamBasicDescription;
@end
