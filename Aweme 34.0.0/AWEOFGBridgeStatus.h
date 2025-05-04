@interface AWEOFGBridgeStatus : NSObject
@property (nonatomic) q statusCode;
@property (nonatomic) NSString message;
- (long long)statusCode;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
- (void)setStatusCode:;
+ (id)statusWithStatusCode:message:;
+ (id)defaultStatusWithStatusCode:;
+ (id)messageWithStatusCode:;
@end
