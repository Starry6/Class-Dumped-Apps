@interface TTVideoEngineEnvConfig : NSObject
+ (id)boeHost;
+ (id)dnsGoogleHost;
+ (id)dnsServerHost;
+ (id)dnsTTHost;
+ (void)setBoeHost:;
+ (void)setDnsGoogleHost:;
+ (void)setDnsServerHost:;
+ (void)setDnsTTHost:;
+ (void)setTestReachabilityHost:;
+ (id)testReachabilityHost;
@end
