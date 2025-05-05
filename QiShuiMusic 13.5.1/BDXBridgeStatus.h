@interface BDXBridgeStatus : NSObject
@property (nonatomic) q statusCode;
@property (nonatomic) NSString message;
- (void)setStatusCode:;
- (long long)statusCode;
- (void)setMessage:;
- (id)message;
- (void).cxx_destruct;
- (id)description;
+ (id)statusMessageWithStatusCode:;
+ (id)statusWithStatusCode:message:;
+ (id)statusWithStatusCode:;
@end
