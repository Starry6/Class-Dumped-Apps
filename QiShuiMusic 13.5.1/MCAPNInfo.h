@interface MCAPNInfo : NSObject
@property (nonatomic) NSString apnName;
@property (nonatomic) NSString username;
@property (nonatomic) NSString password;
@property (nonatomic) NSString proxy;
@property (nonatomic) NSNumber proxyPort;
- (void)setProxy:;
- (void)setPassword:;
- (id)username;
- (id)password;
- (id)proxy;
- (void)setUsername:;
- (void).cxx_destruct;
- (id)description;
- (id)apnName;
- (void)setApnName:;
- (id)defaultsRepresentation;
- (id)installationWarnings;
- (id)proxyPort;
- (void)setProxyPort:;
- (id)strippedDefaultsRepresentation;
@end
