@interface BDTrackerNetworkConnection : NSObject
@property (nonatomic) q connection;
@property (nonatomic) NSString connectionName;
@property (nonatomic) TTReachability reachability;
- (id)connectionName;
- (id)init;
- (void)dealloc;
- (void)setReachability:;
- (void)connectionChanged:;
- (void)setConnectionName:;
- (long long)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)reachability;
+ (id)shareInstance;
@end
