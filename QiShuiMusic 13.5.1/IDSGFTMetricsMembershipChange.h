@interface IDSGFTMetricsMembershipChange : IDSGFTMetricsReferencePoint
- (id)initWithFromType:fromUniqueID:anonymizer:template:;
- (double)referenceTime;
- (void)receivedKMOverQRFromToken:;
- (void)receivedKMOverPushFromToken:;
- (void)receivedKMOverPushViaCacheForToken:;
- (void)receivedKMOverPushViaCacheForToken:atTime:;
- (void)receivedKMOverQUICFromToken:;
@end
