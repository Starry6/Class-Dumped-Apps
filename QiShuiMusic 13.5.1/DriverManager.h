@interface DriverManager : NSObject
- (void)removeObserver:;
- (void)refresh;
- (void)addObserver:;
- (void).cxx_destruct;
- (void)setDriverState:approved:;
- (id)driverApprovalStatesForThirdPartyApp:;
- (id)initWithSwiftManager:;
- (long long)driverCount;
- (long long)thirdPartyDriverCount;
- (long long)driverCountForAppID:;
+ (id)sharedManager;
@end
