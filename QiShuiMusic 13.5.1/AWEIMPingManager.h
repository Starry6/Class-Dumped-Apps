@interface AWEIMPingManager : NSObject
@property (nonatomic) IESIMNetworkTCPPingHelper pingHelper;
@property (nonatomic) NSInteger pingCount;
- (void)pingWithAddrs:index:completion:;
- (id)pingHelper;
- (void)pingWithBlock:;
- (void)setPingHelper:;
- (id)init;
- (int)pingCount;
- (void).cxx_destruct;
- (void)setPingCount:;
+ (BOOL)enablePing;
+ (long long)maxPingCount;
+ (id)pingAddrs;
+ (long long)pingTimeout;
+ (id)sharedInstance;
@end
