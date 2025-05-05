@interface IDSGFTMetricsJoinCycle : IDSGFTMetricsReferencePoint
- (id)initWithFromType:fromUniqueID:anonymizer:template:;
- (void)localDidJoin;
- (void)receivedAllocateResponseAtTime:;
- (void)localDidJoinAtTime:;
- (void)remoteDidJoin;
- (void)remoteDidBecomeActive;
- (void)receivedKMOverQR;
- (void)receivedKMOverPush;
- (void)receivedKMOverPushViaCache;
- (void)receivedKMOverPushViaCacheAtTime:;
- (void)receivedKMOverQUIC;
- (void)requestedKM;
- (void)receivedPreKeyOverPush;
- (void)receivedPreKeyOverQUIC;
- (void)decryptedBlobOverQUIC:;
- (double)referenceTimeForTimeBase:;
@end
