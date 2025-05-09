@interface IMReachability : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> _queue;
@property (nonatomic) ^v reachabilityRef;
@property (nonatomic) NSString reachabilityDescription;
@property (nonatomic) Q flags;
@property (nonatomic) BOOL gettingFlags;
@property (nonatomic) <IMReachabilityDelegate> delegate;
@property (nonatomic) BOOL connectionRequired;
- (void)dealloc;
- (void)_forceGetFlagsIfNecessary;
- (void)setDelegate:;
- (id)reachabilityDescription;
- (BOOL)connectionRequired;
- (void)setGettingFlags:;
- (id)_initWithReachabilityRef:description:delegate:;
- (BOOL)gettingFlags;
- (id)reachabilityRef;
- (void)setReachabilityRef:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithLocalSocketAddress:remoteSocketAddress:delegate:;
- (void)_handleCallbackForSCNetworkReachability:;
- (id)description;
- (void)setFlags:;
- (void)set_queue:;
- (unsigned long long)flags;
- (void)setReachabilityDescription:;
- (id)initWithRemoteHost:delegate:;
- (id)_queue;
+ (id)reachabilityWithHostName:;
+ (id)reachabilityWithRemoteAddress:;
+ (id)reachabilityWithLocalAddress:remoteAddress:;
@end
