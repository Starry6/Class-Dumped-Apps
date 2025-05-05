@interface ByteRTCLocalProxyInfo : NSObject
@property (nonatomic) Q localProxyType;
@property (nonatomic) NSString localProxyIp;
@property (nonatomic) NSInteger localProxyPort;
@property (nonatomic) NSString localProxyUsername;
@property (nonatomic) NSString localProxyPassword;
- (unsigned long long)localProxyType;
- (void)setLocalProxyType:;
- (id)localProxyIp;
- (void)setLocalProxyIp:;
- (int)localProxyPort;
- (void)setLocalProxyPort:;
- (id)localProxyUsername;
- (void)setLocalProxyUsername:;
- (id)localProxyPassword;
- (void)setLocalProxyPassword:;
- (void).cxx_destruct;
@end
