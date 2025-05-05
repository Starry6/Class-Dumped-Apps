@interface FLEXTabList : NSObject
@property (nonatomic) UINavigationController activeTab;
@property (nonatomic) NSArray openTabs;
@property (nonatomic) NSArray openTabSnapshots;
@property (nonatomic) q activeTabIndex;
- (id)init;
- (void)chooseNewActiveTab;
- (void)setActiveTabIndex:;
- (void)addTab:;
- (void)closeTab:;
- (void)closeTabAtIndex:;
- (void)closeTabsAtIndexes:;
- (void)closeActiveTab;
- (void)closeAllTabs;
- (void)updateSnapshotForActiveTab;
- (id)activeTab;
- (id)openTabs;
- (id)openTabSnapshots;
- (long long)activeTabIndex;
- (void).cxx_destruct;
+ (id)sharedList;
@end
