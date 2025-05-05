@interface PDFPasswordViewController : UIViewController
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)viewDidLoad;
- (void)userDidEnterPassword:forPasswordView:;
- (void)clearPasswordField;
- (void)focusOnPasswordField;
- (void)presentInvalidPasswordAlertWithParentViewController:;
@end
