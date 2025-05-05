@interface SKRemoteComposeReviewViewController : _UIRemoteViewController
@property (nonatomic) SKComposeReviewViewController composeReviewViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldAutorotateToInterfaceOrientation:;
- (void)dealloc;
- (void)viewServiceDidTerminateWithError:;
- (void).cxx_destruct;
- (id)initWithNibName:bundle:;
- (void)didPrepareWithResult:error:;
- (void)promptForStarRating;
- (void)didFinishWithResult:error:;
- (void)_keyboardVisibilityDidChangeNotification:;
- (id)composeReviewViewController;
- (void)setComposeReviewViewController:;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@end
