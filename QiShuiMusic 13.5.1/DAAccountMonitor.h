@interface DAAccountMonitor : NSObject
@property (nonatomic) NSHashTable accounts;
@property (nonatomic) NSObject<OS_dispatch_queue> accountsQueue;
- (id)accounts;
- (id)init;
- (id)monitoredAccounts;
- (void).cxx_destruct;
- (void)setAccounts:;
- (void)monitorAccount:;
- (void)unmonitorAccount:;
- (id)accountsQueue;
- (void)setAccountsQueue:;
+ (id)sharedMonitor;
@end
