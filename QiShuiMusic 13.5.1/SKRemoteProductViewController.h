@interface SKRemoteProductViewController : _UIRemoteViewController
@property (nonatomic) SKStoreProductViewController productViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldAutorotateToInterfaceOrientation:;
- (void)viewServiceDidTerminateWithError:;
- (void).cxx_destruct;
- (void)setStatusBarStyle:animated:;
- (void)setStatusBarHidden:withAnimation:;
- (void)didFinish;
- (void)didFinishWithResult:;
- (void)didFinishDismissal;
- (void)didReceiveTitle:;
- (void)loadDidFinishWithResult:error:;
- (void)presentPageWithRequest:animated:;
- (void)promptForStarRating;
- (id)productViewController;
- (void)setProductViewController:;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@end
