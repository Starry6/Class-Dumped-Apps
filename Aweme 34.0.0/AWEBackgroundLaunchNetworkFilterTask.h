@interface AWEBackgroundLaunchNetworkFilterTask : NSObject
@property (nonatomic) NSArray whiteHosts;
@property (nonatomic) BOOL enableNetworkFilter;
@property (nonatomic) NSMutableArray array;
@property (nonatomic) @? previousRequestLimitBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_startRequestInterceptIfNeeded;
- (void)p_startRequestIntercept;
- (void)setEnableNetworkFilter:;
- (BOOL)enableNetworkFilter;
- (BOOL)p_requestLimited:;
- (void)p_logIfNeeded:shouldLimited:;
- (void)setPreviousRequestLimitBlock:;
- (id)previousRequestLimitBlock;
- (void)p_writeFilterUrlInfoIfNeeded;
- (id)whiteHosts;
- (void)p_cancelRequestInterceptIfNeeded;
- (void)setWhiteHosts:;
- (id)array;
- (void)setArray:;
- (void).cxx_destruct;
+ (id)sharedInstance;
+ (void)execute;
@end
