@interface WBSTabGroupConfirmationAlert : UIAlertController
@property (nonatomic) WBTabGroup tabGroup;
@property (nonatomic) WBTabGroupManager tabGroupManager;
@property (nonatomic) q role;
@property (nonatomic) <WBSTabGroupConfirmationAlertDelegate> delegate;
- (void)setDelegate:;
- (void)dismissViewControllerAnimated:completion:;
- (void)setRole:;
- (id)delegate;
- (void).cxx_destruct;
- (id)tabGroupManager;
- (long long)role;
- (id)tabGroup;
- (void)_handleResult:;
- (id)_representativeHost;
- (void)_initializeStringsForDeleteConfirmation;
- (void)_configureAlert;
- (void)presentFromViewController:withResultHandler:;
+ (id)deleteConfirmationAlertWithTabGroup:manager:delegate:;
@end
