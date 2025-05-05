@interface AATrustedDeviceListRequest : AARequest
@property (nonatomic) NSString heartbeatToken;
- (id)urlString;
- (id)heartbeatToken;
- (id)urlRequest;
- (void).cxx_destruct;
- (void)setHeartbeatToken:;
- (id)initWithURLString:accountStore:grandSlamAccount:;
+ (Class)responseClass;
@end
