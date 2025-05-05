@interface NSPFallbackProxyPath : NSPProxyPath
- (void)setupSingleHopProxyRegistrations;
- (void)resetSingleHopProxyAgent;
- (void)setupMultiHopProxyRegistrations;
- (void)resetObliviousHopProxyAgents;
- (void)resetMultiHopProxyAgent;
- (BOOL)proxyPathIsValid:proxyPathList:;
@end
