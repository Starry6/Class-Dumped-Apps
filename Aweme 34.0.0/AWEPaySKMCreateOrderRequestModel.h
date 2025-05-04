@interface AWEPaySKMCreateOrderRequestModel : CJPayBaseResponse
@property (nonatomic) NSString memo;
@property (nonatomic) NSDictionary amount;
@property (nonatomic) NSString code_token;
@property (nonatomic) q display_time;
@property (nonatomic) NSString scan_channel;
@property (nonatomic) NSString verify_id;
- (id)code_token;
- (void)setCode_token:;
- (long long)display_time;
- (void)setDisplay_time:;
- (id)scan_channel;
- (void)setScan_channel:;
- (id)verify_id;
- (void)setVerify_id:;
- (void).cxx_destruct;
- (id)amount;
- (void)setAmount:;
- (id)memo;
- (void)setMemo:;
@end
