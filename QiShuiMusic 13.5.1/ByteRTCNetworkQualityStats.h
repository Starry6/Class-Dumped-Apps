@interface ByteRTCNetworkQualityStats : NSObject
@property (nonatomic) NSString uid;
@property (nonatomic) double lossRatio;
@property (nonatomic) NSInteger rtt;
@property (nonatomic) NSInteger totalBandwidth;
@property (nonatomic) Q txQuality;
@property (nonatomic) Q rxQuality;
- (unsigned long long)rxQuality;
- (void)setRxQuality:;
- (void)setTxQuality:;
- (unsigned long long)txQuality;
- (double)lossRatio;
- (void)setLossRatio:;
- (int)totalBandwidth;
- (void)setTotalBandwidth:;
- (id)uid;
- (void)setUid:;
- (void).cxx_destruct;
- (int)rtt;
- (void)setRtt:;
@end
