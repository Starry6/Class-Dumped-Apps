@interface CATRemoteConnectionSocketOptions : NSObject
@property (nonatomic) NSNumber adaptiveWriteTimeout;
@property (nonatomic) NSNumber keepAliveEnabled;
@property (nonatomic) NSNumber keepAliveDelay;
@property (nonatomic) NSNumber keepAliveInterval;
@property (nonatomic) NSNumber keepAliveCount;
@property (nonatomic) NSNumber netServiceType;
- (void)setKeepAliveInterval:;
- (void)setKeepAliveCount:;
- (id)keepAliveInterval;
- (void).cxx_destruct;
- (id)keepAliveCount;
- (id)copyWithZone:;
- (id)adaptiveWriteTimeout;
- (void)setAdaptiveWriteTimeout:;
- (id)keepAliveEnabled;
- (void)setKeepAliveEnabled:;
- (id)keepAliveDelay;
- (void)setKeepAliveDelay:;
- (id)netServiceType;
- (void)setNetServiceType:;
@end
