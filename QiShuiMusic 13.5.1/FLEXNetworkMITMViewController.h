@interface FLEXNetworkMITMViewController : FLEXTableViewController
@property (nonatomic) BOOL updateInProgress;
@property (nonatomic) BOOL pendingReload;
@property (nonatomic) q mode;
@property (nonatomic) FLEXMITMDataSource dataSource;
@property (nonatomic) FLEXMITMDataSource HTTPDataSource;
@property (nonatomic) FLEXMITMDataSource websocketDataSource;
@property (nonatomic) FLEXMITMDataSource firebaseDataSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:;
- (void)dealloc;
- (void)registerForNotifications;
- (void)settingsButtonTapped:;
- (void)trashButtonTapped:;
- (void)settingsViewControllerDoneTapped:;
- (long long)mode;
- (void)setMode:;
- (id)dataSource;
- (void)updateTransactions:;
- (void)updateFirstSectionHeader;
- (id)headerText;
- (void)handleNewTransactionRecordedNotification:;
- (void)tryUpdateTransactions;
- (void)handleTransactionUpdatedNotification:;
- (void)handleTransactionsClearedNotification:;
- (void)handleNetworkObserverEnabledStateChangedNotification:;
- (long long)tableView:numberOfRowsInSection:;
- (id)tableView:titleForHeaderInSection:;
- (void)tableView:willDisplayHeaderView:forSection:;
- (id)tableView:cellForRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (BOOL)tableView:shouldShowMenuForRowAtIndexPath:;
- (BOOL)tableView:canPerformAction:forRowAtIndexPath:withSender:;
- (void)tableView:performAction:forRowAtIndexPath:withSender:;
- (id)tableView:contextMenuConfigurationForRowAtIndexPath:point:;
- (id)transactionAtIndexPath:;
- (id)HTTPTransactionAtIndexPath:;
- (id)websocketTransactionAtIndexPath:;
- (id)firebaseTransactionAtIndexPath:;
- (void)updateSearchResults:;
- (void)searchBar:selectedScopeButtonIndexDidChange:;
- (void)willDismissSearchController:;
- (BOOL)updateInProgress;
- (void)setUpdateInProgress:;
- (BOOL)pendingReload;
- (void)setPendingReload:;
- (id)HTTPDataSource;
- (id)websocketDataSource;
- (id)firebaseDataSource;
- (void).cxx_destruct;
+ (id)globalsEntryTitle:;
+ (id)globalsEntryRowAction:;
+ (id)globalsEntryViewController:;
@end
