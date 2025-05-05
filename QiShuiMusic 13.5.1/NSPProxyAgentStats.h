@interface NSPProxyAgentStats : NSPProxyAnalytics
@property (nonatomic) NSString tierType;
@property (nonatomic) Q ingressProxyTokensAdded;
@property (nonatomic) Q egressProxyTokensAdded;
@property (nonatomic) Q ingressProxyLowWaterMarkHitCount;
@property (nonatomic) Q egressProxyLowWaterMarkHitCount;
- (void)setIngressProxyTokensAdded:;
- (unsigned long long)ingressProxyTokensAdded;
- (void)setIngressProxyLowWaterMarkHitCount:;
- (void)setEgressProxyTokensAdded:;
- (void)setTierType:;
- (id)eventName;
- (void).cxx_destruct;
- (unsigned long long)egressProxyLowWaterMarkHitCount;
- (id)analyticsDict;
- (id)tierType;
- (void)setEgressProxyLowWaterMarkHitCount:;
- (unsigned long long)egressProxyTokensAdded;
- (unsigned long long)ingressProxyLowWaterMarkHitCount;
@end
