@interface CATNetworkReachability : NSObject
@property (nonatomic) I flags;
@property (nonatomic) CATAddress address;
@property (nonatomic) <CATNetworkReachabilityDelegate> delegate;
@property (nonatomic) BOOL reachable;
- (void)delegateDidChange;
- (void)dealloc;
- (void)removeFromRunLoop:forMode:;
- (void)setDelegate:;
- (void)scheduleInRunLoop:forMode:;
- (id)debugDescription;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithAddress:;
- (id)address;
- (BOOL)isReachable;
- (void)setFlags:;
- (unsigned int)flags;
- (void)reachabilityDidChangeWithFlags:;
- (void)configureCallback;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:;
+ (id)reachabilityForInternetConnection;
+ (id)keyPathsForValuesAffectingReachable;
+ (BOOL)isReachableForLocalWiFiWithFlags:;
+ (BOOL)isReachableForNetworkWithFlags:;
@end
