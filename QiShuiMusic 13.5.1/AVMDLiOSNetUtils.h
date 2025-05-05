@interface AVMDLiOSNetUtils : NSObject
@property (nonatomic) Q currentState;
@property (nonatomic) BOOL scheduleing;
@property (nonatomic) ^{__SCNetworkReachability=} reachabilityRef;
@property (nonatomic) BOOL Ipv4Reachable;
@property (nonatomic) BOOL Ipv6Reachable;
- (BOOL)Ipv4Reachable;
- (BOOL)Ipv6Reachable;
- (void)setScheduleing:;
- (id)getStateString;
- (void)probdIpv4Reachable;
- (void)probdIpv6Reachable;
- (BOOL)scheduleing;
- (void)setIpv4Reachable:;
- (void)setIpv6Reachable:;
- (void)setCurrentState:;
- (id)init;
- (void)dealloc;
- (unsigned long long)currentState;
- (void)start;
- (void)stop;
- (id)reachabilityRef;
- (void)setReachabilityRef:;
- (void).cxx_destruct;
+ (id)convertAddrToString:;
+ (BOOL)getNetworkIndex:cellularIndex:;
+ (id)shareInstance;
@end
