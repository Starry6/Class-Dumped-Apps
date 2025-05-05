@interface SOAuthorizationResultCore : NSObject
@property (nonatomic) NSDictionary httpAuthorizationHeaders;
@property (nonatomic) NSHTTPURLResponse httpResponse;
@property (nonatomic) NSData httpBody;
@property (nonatomic) NSArray privateKeys;
- (id)init;
- (id)httpResponse;
- (id)httpBody;
- (void)setHttpAuthorizationHeaders:;
- (void).cxx_destruct;
- (id)httpAuthorizationHeaders;
- (void)setHttpBody:;
- (void)setHttpResponse:;
- (id)initWithHTTPAuthorizationHeaders:;
- (id)initWithHTTPResponse:httpBody:;
- (id)privateKeys;
- (void)setPrivateKeys:;
@end
