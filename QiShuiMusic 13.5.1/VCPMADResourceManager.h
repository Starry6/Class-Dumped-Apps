@interface VCPMADResourceManager : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (long long)validateCost:;
- (long long)currentBudget;
- (void)_setBudget:;
- (void)checkTimeout;
- (id)entryForResource:;
- (void)_reserveBudget:;
- (id)activateResource:;
- (void)deactivateResource:;
- (void)reserveBudget:;
- (void)purgeInactiveResources;
- (void)_purgeAllResources;
- (void)purgeAllResources;
+ (id)sharedManager;
@end
