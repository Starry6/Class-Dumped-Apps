@interface AVNSURLProtocolRequest : AVAssetCustomURLRequest
@property (nonatomic) AVAssetCustomURLBridgeForNSURLProtocol bridge;
@property (nonatomic) ^{_CFURLConnection=} connection;
- (void)dealloc;
- (id)bridge;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)setBridge:;
@end
