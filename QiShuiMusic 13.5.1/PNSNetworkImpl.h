@interface PNSNetworkImpl : NSObject
@property (nonatomic) NSMutableArray blocks;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)__pnsNetworkStatusFromTTReachabilityStatus:;
- (void)receiveNetworkChangedNotification:;
- (void)registerNetworkChangeHandler:;
- (id)init;
- (void)dealloc;
- (id)blocks;
- (void)setBlocks:;
- (void).cxx_destruct;
- (long long)currentNetworkStatus;
@end
