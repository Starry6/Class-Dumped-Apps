@interface IESIMNetworkTCPPingHelper : NSObject
@property (nonatomic) @? complete;
@property (nonatomic) NSString host;
@property (nonatomic) Q port;
@property (nonatomic) double timeout;
- (void)complete:latency:;
- (id)convertDomainToIp:;
- (void)pingWithBlock:;
- (void)sendAndRec;
- (id)complete;
- (id)init;
- (id)host;
- (void)setHost:;
- (void)setTimeout:;
- (unsigned long long)port;
- (void)setPort:;
- (int)connect:;
- (void).cxx_destruct;
- (double)timeout;
@end
