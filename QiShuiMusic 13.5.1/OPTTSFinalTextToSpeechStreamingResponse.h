@interface OPTTSFinalTextToSpeechStreamingResponse : NSObject
@property (nonatomic) NSString speech_id;
@property (nonatomic) NSString session_id;
@property (nonatomic) NSInteger error_code;
@property (nonatomic) NSString error_str;
@property (nonatomic) NSString stream_id;
@property (nonatomic) NSInteger total_pkt_number;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)speech_id;
- (id)session_id;
- (id)stream_id;
- (int)error_code;
- (id)error_str;
- (int)total_pkt_number;
- (id)flatbuffData;
- (id)initWithFlatbuffData:;
- (id)initAndVerifyWithFlatbuffData:;
- (id)initWithFlatbuffData:root:;
- (id)initWithFlatbuffData:root:verify:;
- (id)addObjectToBuffer:;
@end
