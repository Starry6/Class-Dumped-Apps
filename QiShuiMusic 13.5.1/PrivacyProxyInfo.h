@interface PrivacyProxyInfo : NSObject
@property (nonatomic) NSString egressProxyURL;
@property (nonatomic) NSString ingressProxyURL;
@property (nonatomic) NSString egressFallbackProxyURL;
@property (nonatomic) NSString ingressFallbackProxyURL;
@property (nonatomic) NSDictionary tokenCounts;
@property (nonatomic) Q deviceIdentityValidationCount;
@property (nonatomic) Q anisetteValidationCount;
@property (nonatomic) Q unactivatedTokenCount;
@property (nonatomic) Q activatedTokenCount;
@property (nonatomic) Q requestedTokenCount;
@property (nonatomic) Q proxyTokenFetchSuccessCount;
@property (nonatomic) Q proxyTokenFetchFailedCount;
@property (nonatomic) Q proxyTokenConsumedCount;
@property (nonatomic) Q proxyTokenExpiredCount;
@property (nonatomic) Q proxyAgentLowWaterMarkHitCount;
@property (nonatomic) Q proxyCacheLowWaterMarkHitCount;
@property (nonatomic) Q badTokenCount;
@property (nonatomic) Q missingTokenCount;
@property (nonatomic) Q networkProxiesRotated;
@property (nonatomic) Q networkFallbackProxiesRotated;
@property (nonatomic) Q proxiesRotated;
@property (nonatomic) Q configFetchedSuccessCount;
@property (nonatomic) Q configFetchedFailedCount;
- (id)ingressFallbackProxyURL;
- (id)ingressProxyURL;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)diagnostics;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)description;
- (id)serialize;
- (id)copyWithZone:;
- (id)egressProxyURL;
- (void)setEgressProxyURL:;
- (void)setIngressProxyURL:;
- (id)egressFallbackProxyURL;
- (void)setEgressFallbackProxyURL:;
- (void)setIngressFallbackProxyURL:;
- (id)tokenCounts;
- (void)setTokenCounts:;
- (unsigned long long)deviceIdentityValidationCount;
- (void)setDeviceIdentityValidationCount:;
- (unsigned long long)anisetteValidationCount;
- (void)setAnisetteValidationCount:;
- (unsigned long long)unactivatedTokenCount;
- (void)setUnactivatedTokenCount:;
- (unsigned long long)activatedTokenCount;
- (void)setActivatedTokenCount:;
- (unsigned long long)requestedTokenCount;
- (void)setRequestedTokenCount:;
- (unsigned long long)proxyTokenFetchSuccessCount;
- (void)setProxyTokenFetchSuccessCount:;
- (unsigned long long)proxyTokenFetchFailedCount;
- (void)setProxyTokenFetchFailedCount:;
- (unsigned long long)proxyTokenConsumedCount;
- (void)setProxyTokenConsumedCount:;
- (unsigned long long)proxyTokenExpiredCount;
- (void)setProxyTokenExpiredCount:;
- (unsigned long long)proxyAgentLowWaterMarkHitCount;
- (void)setProxyAgentLowWaterMarkHitCount:;
- (unsigned long long)proxyCacheLowWaterMarkHitCount;
- (void)setProxyCacheLowWaterMarkHitCount:;
- (unsigned long long)badTokenCount;
- (void)setBadTokenCount:;
- (unsigned long long)missingTokenCount;
- (void)setMissingTokenCount:;
- (unsigned long long)networkProxiesRotated;
- (void)setNetworkProxiesRotated:;
- (unsigned long long)networkFallbackProxiesRotated;
- (void)setNetworkFallbackProxiesRotated:;
- (unsigned long long)proxiesRotated;
- (void)setProxiesRotated:;
- (unsigned long long)configFetchedSuccessCount;
- (void)setConfigFetchedSuccessCount:;
- (unsigned long long)configFetchedFailedCount;
- (void)setConfigFetchedFailedCount:;
+ (BOOL)supportsSecureCoding;
@end
