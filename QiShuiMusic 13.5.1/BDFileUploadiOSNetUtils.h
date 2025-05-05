@interface BDFileUploadiOSNetUtils : NSObject
@property (nonatomic) Q currentState;
@property (nonatomic) BOOL scheduleing;
@property (nonatomic) ^{__SCNetworkReachability=} reachabilityRef;
- (void)setScheduleing:;
- (BOOL)scheduleing;
- (void)setCurrentState:;
- (id)init;
- (void)dealloc;
- (unsigned long long)currentState;
- (void)start;
- (void)stop;
- (id)reachabilityRef;
- (void)setReachabilityRef:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
