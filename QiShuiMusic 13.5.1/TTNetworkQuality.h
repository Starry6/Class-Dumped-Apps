@interface TTNetworkQuality : NSObject
@property (nonatomic) q httpRttMs;
@property (nonatomic) q transportRttMs;
@property (nonatomic) q downstreamThroughputKbps;
- (long long)downstreamThroughputKbps;
- (long long)httpRttMs;
- (void)setDownstreamThroughputKbps:;
- (void)setHttpRttMs:;
- (void)setTransportRttMs:;
- (long long)transportRttMs;
- (id)init;
@end
