@interface AWELiveNetworkQualityInfoServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)transportRttMs;
- (long long)httpRttMs;
- (long long)downstreamThroughputKbps;
- (double)upstreamLossRate;
- (double)downstreamLossRate;
- (id)networkFilterHeadersFromTag:;
- (unsigned long long)bitrate;
- (long long)netType;
@end
