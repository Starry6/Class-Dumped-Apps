@interface HTSLiveNetworkStatusNotifier : NSObject
@property (nonatomic) HTSLiveReachability reachability;
@property (nonatomic) BOOL started;
- (void)setStarted:;
- (id)init;
- (void)dealloc;
- (BOOL)started;
- (void)start;
- (void)setReachability:;
- (void).cxx_destruct;
- (id)reachability;
+ (id)sharedNotifier;
@end
