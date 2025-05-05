@interface HMDServerStateManager : NSObject
@property (nonatomic) HMDThreadSafeDictionary hmdServerCheckers;
@property (nonatomic) NSString defaultAppID;
- (id)defaultAppID;
- (void)getAppID;
- (id)getServerChecker:;
- (id)getServerChecker:forApp:;
- (id)hmdServerCheckers;
- (void)setDefaultAppID:;
- (void)setHmdServerCheckers:;
- (id)init;
- (void).cxx_destruct;
+ (id)shared;
@end
