@interface NSPDeviceIdentityStats : NSPProxyAnalytics
@property (nonatomic) BOOL success;
@property (nonatomic) NSString errorDomain;
@property (nonatomic) q errorCode;
- (id)errorDomain;
- (long long)errorCode;
- (void)setErrorDomain:;
- (BOOL)success;
- (void)setSuccess:;
- (id)eventName;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (id)analyticsDict;
@end
