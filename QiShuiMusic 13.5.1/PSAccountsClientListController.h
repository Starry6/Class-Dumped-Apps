@interface PSAccountsClientListController : PSListController
- (id)init;
- (void)dealloc;
- (id)specifierForID:;
- (void).cxx_destruct;
- (void)setSpecifiers:;
- (void)viewWillAppear:;
- (id)_visibleAccountTypeIDs;
- (id)requestedAccountDataclass;
- (void)updateAccountSpecifier;
- (BOOL)_isAccountModificationDisabledByRestrictions;
@end
