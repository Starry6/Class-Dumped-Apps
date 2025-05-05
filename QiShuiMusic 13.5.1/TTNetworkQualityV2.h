@interface TTNetworkQualityV2 : NSObject
@property (nonatomic) NSInteger level;
@property (nonatomic) NSInteger effectivHttpRttMs;
@property (nonatomic) NSInteger effectiveTransportRttMs;
@property (nonatomic) NSInteger effectiveRxThroughputKbps;
- (int)effectivHttpRttMs;
- (int)effectiveRxThroughputKbps;
- (int)effectiveTransportRttMs;
- (void)setEffectivHttpRttMs:;
- (void)setEffectiveRxThroughputKbps:;
- (void)setEffectiveTransportRttMs:;
- (void)setLevel:;
- (id)init;
- (int)level;
@end
