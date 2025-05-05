@interface OPTTSMutableFinalTextToSpeechStreamingResponse : OPTTSFinalTextToSpeechStreamingResponse
@property (nonatomic) NSString speech_id;
@property (nonatomic) NSString session_id;
@property (nonatomic) NSInteger error_code;
@property (nonatomic) NSString error_str;
@property (nonatomic) NSString stream_id;
@property (nonatomic) NSInteger total_pkt_number;
- (id)init;
- (id)copyWithZone:;
- (id)speech_id;
- (void)setSpeech_id:;
- (id)session_id;
- (void)setSession_id:;
- (id)stream_id;
- (void)setStream_id:;
- (int)error_code;
- (void)setError_code:;
- (id)error_str;
- (void)setError_str:;
- (int)total_pkt_number;
- (void)setTotal_pkt_number:;
@end
