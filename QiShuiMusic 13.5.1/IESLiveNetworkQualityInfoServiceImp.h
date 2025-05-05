@interface IESLiveNetworkQualityInfoServiceImp : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)downstreamLossRate;
- (long long)downstreamThroughputKbps;
- (long long)httpRttMs;
- (id)networkFilterHeadersFromTag:;
- (long long)transportRttMs;
- (double)upstreamLossRate;
- (unsigned long long)bitrate;
- (long long)netType;
@end
