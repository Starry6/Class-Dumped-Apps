@interface PCSLockManager : NSObject
@property (nonatomic) NSHashTable observers;
@property (nonatomic) NSHashTable holders;
@property (nonatomic) NSObject<OS_os_log> log;
- (void)removeAssertion:;
- (id)log;
- (id)initManager;
- (void)setLog:;
- (void).cxx_destruct;
- (void)setObservers:;
- (id)observers;
- (id)lockAssertion:;
- (BOOL)holdAssertion:;
- (void)_onlockDropAssertion:;
- (void)dropAssertion:;
- (id)holders;
- (void)setHolders:;
+ (id)manager;
+ (void)dropAssertion;
+ (BOOL)holdAssertion;
@end
