@interface BDXRLRemoteConfig : NSObject
@property (nonatomic) BDXRLRemoteInfo remoteInfo;
@property (nonatomic) NSArray processorsSequence;
@property (nonatomic) NSArray shuffleDomains;
@property (nonatomic) NSNumber dynamic;
@property (nonatomic) NSNumber disableCdnCache;
@property (nonatomic) NSNumber retryTimes;
- (id)disableCdnCache;
- (id)processorsSequence;
- (id)retryTimes;
- (void)setDisableCdnCache:;
- (void)setProcessorsSequence:;
- (void)setRetryTimes:;
- (void)setShuffleDomains:;
- (id)shuffleDomains;
- (void).cxx_destruct;
- (id)description;
- (id)dynamic;
- (void)setDynamic:;
- (id)remoteInfo;
- (void)setRemoteInfo:;
@end
