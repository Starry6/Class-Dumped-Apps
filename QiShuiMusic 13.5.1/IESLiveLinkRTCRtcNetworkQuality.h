@interface IESLiveLinkRTCRtcNetworkQuality : NSObject
@property (nonatomic) NSString uid;
@property (nonatomic) Q txQuality;
@property (nonatomic) Q rxQuality;
- (unsigned long long)rxQuality;
- (void)setRxQuality:;
- (void)setTxQuality:;
- (unsigned long long)txQuality;
- (id)uid;
- (void)setUid:;
- (void).cxx_destruct;
@end
