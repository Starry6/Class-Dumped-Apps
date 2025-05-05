@interface SFAccountPickerViewController : UINavigationController
@property (nonatomic) LAContext authenticatedContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_appDidEnterBackground:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_dismiss;
- (id)authenticatedContext;
- (void)accountPickerTableViewControllerDidCancel:;
- (void)accountPickerTableViewController:didPickSavedAccount:;
- (void)setAuthenticatedContext:;
- (id)initWithConfiguration:completionHandler:;
@end
