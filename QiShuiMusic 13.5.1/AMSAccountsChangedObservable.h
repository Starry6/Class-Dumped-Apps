@interface AMSAccountsChangedObservable : NSObject
@property (nonatomic) AMSObservable observable;
@property (nonatomic) {os_unfair_lock_s=I} notificationsLock;
@property (nonatomic) ACAccount account;
@property (nonatomic) NSString accountTypeIdentifier;
- (id)account;
- (id)observable;
- (void)unsubscribe:;
- (id)notificationsLock;
- (void)dealloc;
- (id)_initWithAccount:accountTypeIdentifier:;
- (void)_processChangedAccount:;
- (void)subscribe:;
- (void)setObservable:;
- (void).cxx_destruct;
- (id)initWithAccountTypeIdentifier:;
- (void)_accountStoreDidChange:;
- (id)initWithAccount:;
- (BOOL)_shouldNotifyObserversForChangedAccount:;
- (id)accountTypeIdentifier;
+ (id)sharedInstance;
+ (void)_processChangedAccount:;
+ (id)createdObservablesAccessQueue;
+ (id)createdObservables;
+ (id)sharedLocalAccountInstance;
@end
