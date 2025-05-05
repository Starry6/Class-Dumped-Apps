@interface DOCUserInterfaceStateStore : NSObject
@property (nonatomic) NSMutableDictionary uiStateMap;
- (id)init;
- (void).cxx_destruct;
- (id)interfaceStateForConfiguration:;
- (id)_mostRecentInterfaceStateForConfiguration:;
- (void)updateInterfaceState:forConfiguration:;
- (void)purgeStateForConfiguration:;
- (void)purgeApplicationStateForIdentifiers:configuration:;
- (id)_loadUserInterfaceStateFromDefaultsForConfiguration:;
- (void)_writeUserInterfaceStateToDefaultsForConfiguration:;
- (void)_writeMostRecentUserInterfaceStateToDefaultsForConfiguration:;
- (void)_pruneOldState;
- (id)_sortedInterfaceStateKeys;
- (id)docUserDefaults;
- (id)uiStateMap;
- (void)setUiStateMap:;
+ (id)sharedStore;
@end
