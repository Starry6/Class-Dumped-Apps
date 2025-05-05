@interface SFEndNetworkSearchFeedback : SFEndSearchFeedback
@property (nonatomic) q responseSize;
@property (nonatomic) Q rawResponseSize;
@property (nonatomic) Q decompressedResponseSize;
@property (nonatomic) q statusCode;
@property (nonatomic) NSDictionary networkTimingData;
- (void)setStatusCode:;
- (long long)statusCode;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)responseSize;
- (void).cxx_destruct;
- (void)setResponseSize:;
- (id)networkTimingData;
- (unsigned long long)rawResponseSize;
- (void)setRawResponseSize:;
- (unsigned long long)decompressedResponseSize;
- (void)setDecompressedResponseSize:;
- (id)initWithStartSearch:responseSize:statusCode:networkTimingData:;
- (void)setNetworkTimingData:;
+ (BOOL)supportsSecureCoding;
@end
