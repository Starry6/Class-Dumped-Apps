@interface SKStoreProductActivityViewController : UIViewController
@property (nonatomic) <SKStoreProductActivityViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)initWithParameters:;
- (void)setDelegate:;
- (id)animationControllerForDismissedController:;
- (id)initWithCoder:;
- (void)viewWillDisappear:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
- (void)_addRemoteView;
- (void)_requestRemoteViewController;
- (void)_didFinishWithResult:error:;
- (void)_viewTapped:;
@end
