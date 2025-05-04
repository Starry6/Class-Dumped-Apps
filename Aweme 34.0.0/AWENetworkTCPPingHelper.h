@interface AWENetworkTCPPingHelper : NSObject
@property (nonatomic) @? complete;
@property (nonatomic) NSString host;
@property (nonatomic) Q port;
@property (nonatomic) double timeout;
- (void)pingWithBlock:;
- (void)sendAndRec;
- (id)convertDomainToIp:;
- (void)complete:latency:;
- (void)setHost:;
- (id)complete;
- (void)setPort:;
- (unsigned long long)port;
- (id)host;
- (id)init;
- (double)timeout;
- (int)connect:;
- (void)setTimeout:;
- (void).cxx_destruct;
@end
