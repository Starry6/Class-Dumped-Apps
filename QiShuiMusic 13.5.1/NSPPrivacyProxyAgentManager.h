@interface NSPPrivacyProxyAgentManager : NSObject
@property (nonatomic) NSDate tokenIssuanceRestrictedUntilDate;
@property (nonatomic) NSString overridePreferredProxy;
@property (nonatomic) NSString overrideIngressProxy;
@property (nonatomic) NSString overrideFallbackIngressProxy;
@property (nonatomic) NSData overrideIngressProxyKey;
@property (nonatomic) BOOL forceFallback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL dnsFilteringHintEnabled;
@property (nonatomic) NSString geohashOverride;
- (void)setGeohashOverride:;
- (BOOL)isSingleHopProxyAgentRegistered;
- (id)lastTokenOutageReason;
- (void)reportTokenFetchFailure:statusCode:;
- (id)obliviousHopFallbackProxyAgentUUIDForHostname:;
- (BOOL)isSingleHopFallbackProxyAgentRegistered;
- (void)tokenFetchOutage:;
- (void)singleHopAgentRegistered:;
- (void)dealloc;
- (BOOL)dnsFilteringHintEnabled;
- (void)probeServerError:httpStatusCode:;
- (void)reportProxyError:interface:proxyPath:;
- (id)geohashOverride;
- (id)overrideFallbackIngressProxy;
- (id)singleHopQUICProxyConfigHash:;
- (void)tokenRateLimited:untilDate:;
- (BOOL)isMultiHopFallbackProxyAgentRegistered;
- (void)tokenFetched;
- (void)updateDNSFilteringHint:;
- (id)singleHopFallbackProxyConfigHash:;
- (id)lastProxyOutageReason;
- (void)copyProxyInfo:;
- (id)ingressFallbackProxyURL;
- (void)obliviousHopAgentRegistered:hostname:agentUUID:;
- (void)probeRedirected:;
- (void)overridePreferredProxy:;
- (void)setUserEventAgentProberParameters;
- (void)sendRTCReportForServiceOutage:;
- (id)ingressProxyURL;
- (void)requestAccessTokenWithCompletionHandler:;
- (id)initWithCoder:;
- (void)reportProxySuccessOnInterface:proxyPath:;
- (id)overrideIngressProxyKey;
- (void)forceFallback:;
- (void)tokenAdded;
- (void)sendRTCReportWithFailureType:errorCode:url:;
- (void)handleTierChange:;
- (void)singleHopAgentUnregistered:;
- (void)handleConfigChange;
- (BOOL)proxyInfo:matchesProxyIndex:;
- (void)setDnsFilteringHintEnabled:;
- (id)tokenIssuanceRestrictedUntilDate;
- (void)resetProxyErrors;
- (void)encodeWithCoder:;
- (void)mergeTokenStats:;
- (void)probeSuccess:;
- (void)handleLinkQualityChange:;
- (void)sendRTCReportForPrivacyProxyToggleState:;
- (void)switchProxy:;
- (BOOL)checkTokenFetchOutage;
- (id)obliviousHopFallbackProxyConfigHashForHostname:;
- (void)updateGeohashSharingPreference:geohashOverride:;
- (id)initWithDelegate:toggleStats:;
- (id)multiHopQUICProxyConfigHash:;
- (void)setupWithPath:subscriber:geohashSharingEnabled:geohashOverride:linkQuality:;
- (BOOL)forceFallback;
- (void)multiHopAgentRegistered:;
- (void)removeExpiredTokens;
- (void)overrideIngressProxy:fallbackProxy:key:;
- (id)overrideIngressProxy;
- (void).cxx_destruct;
- (void)handlePathChange:;
- (BOOL)isMultiHopProxyAgentRegistered;
- (id)description;
- (void)probeFailed:;
- (void)updateProxyInfo:proxyPathList:fallbackProxyPathList:obliviousConfigs:;
- (void)useDefaultNetworkInterface:;
- (void)obliviousHopAgentUnregistered:hostname:;
- (void)tokenInfoInvalid:;
- (id)overridePreferredProxy;
- (id)multiHopFallbackProxyConfigHash:;
- (id)copyDomainFiltersDictionary;
- (void)multiHopAgentUnregistered:;
- (void)updateUserEventAgentData;
- (void)tokenLowWaterMarkReached:;
- (void)setUserEventAgentTokenFetchParameters;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)singleHopProxyAgentUUID;
+ (id)multiHopFallbackProxyAgentUUID;
+ (id)ingressTokenAgentUUID;
+ (id)multiHopProxyAgentUUID;
+ (BOOL)proxiesMatch:proxyPathList:ingressProxy:egressProxy:pathWeight:supportsFallback:;
+ (void)removeProxyInfoFromKeychain;
+ (id)singleHopFallbackProxyAgentUUID;
@end
