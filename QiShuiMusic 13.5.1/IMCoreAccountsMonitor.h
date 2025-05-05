@interface IMCoreAccountsMonitor : NSObject
@property (nonatomic) BOOL isSignedIntoiCloud;
- (id)init;
- (void).cxx_destruct;
- (void)accountStoreDidChange:;
- (id)_cachedPrimaryAppleAccount;
- (BOOL)isSignedIntoiCloud;
+ (id)sharedInstance;
@end
