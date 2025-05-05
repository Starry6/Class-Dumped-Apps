@interface CNContactViewServiceViewController : UIViewController
@property (nonatomic) CNContactContentViewController contactContentVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (BOOL)shouldPerformDefaultActionForContact:propertyKey:propertyIdentifier:;
- (void)updateEditing:doneButtonEnabled:doneButtonText:;
- (void)didCompleteWithContact:;
- (void)didDeleteContact:;
- (void)isPresentingFullscreen:;
- (void)isPresentingEditingController:;
- (void)didChangePreferredContentSize:;
- (void)didExecuteClearRecentsDataAction;
- (void)didExecuteDeleteFromDowntimeWhitelistAction;
- (void)presentCancelConfirmationAlert;
- (void)viewDidAppearForContactViewController:;
- (id)contactContentVC;
- (void)setContactContentVC:;
+ (Class)classForContentViewControllerImpl;
@end
