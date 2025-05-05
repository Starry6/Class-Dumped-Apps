@interface LSSNetworkEngine : NSObject
- (void)setPackageSize:;
- (void)destoryProbe;
- (id)getUdpProbeInfo:ipCount:;
- (id)initEngineCore;
- (long long)ipv6NetworkReachableProbe:protocol:port:;
- (void)setTimeThreshold:;
- (void)updateProbeParamFromSettings:;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
