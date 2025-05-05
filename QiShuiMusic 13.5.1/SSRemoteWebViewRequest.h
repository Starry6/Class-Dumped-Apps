@interface SSRemoteWebViewRequest : SSRequest
@property (nonatomic) NSString referrer;
@property (nonatomic) NSString URLString;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (id)URLString;
- (void)startWithCompletionBlock:;
- (void).cxx_destruct;
- (void)setURLString:;
- (id)referrer;
- (void)setReferrer:;
@end
