@interface MISystemAppState : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> appStateQueue;
@property (nonatomic) NSMutableDictionary systemAppStateList;
- (id)init;
- (void).cxx_destruct;
- (void)removeIdentifiers:;
- (id)_onQueue_systemAppStateList;
- (id)_onQueue_retrieveSystemAppStateRestoringBackedUpState:;
- (void)_onQueue_setSystemAppStateList:;
- (id)systemAppStateDictionaryRestoringBackedUpState:;
- (void)addIdentifier:withState:;
- (id)appStateQueue;
- (id)systemAppStateList;
- (void)setSystemAppStateList:;
+ (id)sharedList;
+ (id)_systemAppStateFromURL:;
@end
