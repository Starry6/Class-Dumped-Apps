@interface NSPQuicProxyPath : NSPProxyPath
@property (nonatomic) <NSPQUICProxyPathDelegate> quicProxyPathDelegate;
- (void)setupSingleHopProxyRegistrations;
- (void)resetSingleHopProxyAgent;
- (id)quicProxyPathDelegate;
- (void)setupMultiHopProxyRegistrations;
- (void).cxx_destruct;
- (void)setQuicProxyPathDelegate:;
- (id)initWithDelegate:ingressProxy:egressProxy:proxyPathWeight:obliviousConfigs:allowFallback:fallbackToQUIC:forceFallback:allowFailOpen:geohashSharingEnabled:networkCharacteristics:;
- (void)resetObliviousHopProxyAgents;
- (void)resetMultiHopProxyAgent;
- (BOOL)proxyPathIsValid:proxyPathList:;
- (void)enableFallback:;
@end
