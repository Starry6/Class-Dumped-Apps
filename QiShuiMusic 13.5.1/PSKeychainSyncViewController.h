@interface PSKeychainSyncViewController : PSListController
@property (nonatomic) <KeychainSyncViewControllerDelegate> delegate;
- (id)specifiers;
- (void)setDelegate:;
- (void)setTitle:;
- (id)headerView;
- (id)delegate;
- (void).cxx_destruct;
- (double)heightForHeaderInTableView:;
- (id)viewForHeaderInTableView:;
- (id)groupSpecifier;
@end
