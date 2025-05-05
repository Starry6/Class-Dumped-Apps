@interface DABabysitter : NSObject
@property (nonatomic) NSString buildVersion;
@property (nonatomic) NSMutableDictionary refreshingWaiters;
@property (nonatomic) NSMutableDictionary failedWaiters;
@property (nonatomic) NSMutableDictionary restrictedWaiters;
- (void)setBuildVersion:;
- (id)buildVersion;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)_reloadBabysitterProperties;
- (void)_incrementRefreshCountForWaiterID:operationName:;
- (void)_decrementRefreshCountForWaiter:forOperationWithName:;
- (void)_decrementRefreshCountForWaiterID:operationName:;
- (BOOL)registerAccount:forOperationWithName:;
- (void)unregisterAccount:forOperationWithName:;
- (BOOL)accountWithIDShouldContinue:;
- (BOOL)accountShouldContinue:;
- (void)giveAccountWithIDAnotherChance:;
- (id)refreshingWaiters;
- (void)setRefreshingWaiters:;
- (id)failedWaiters;
- (void)setFailedWaiters:;
- (id)restrictedWaiters;
- (void)setRestrictedWaiters:;
+ (id)sharedBabysitter;
@end
