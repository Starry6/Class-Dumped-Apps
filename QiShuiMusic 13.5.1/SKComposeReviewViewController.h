@interface SKComposeReviewViewController : UIViewController
@property (nonatomic) <SKComposeReviewDelegate> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)loadView;
- (id)initWithNibName:bundle:;
- (void)_addRemoteView;
- (void)_requestRemoteViewController;
- (void)_didFinishWithResult:error:;
- (void)prepareWithCompletionBlock:;
- (void)_didPrepareWithResult:error:;
- (id)initWithCompositionURL:;
- (void)_tearDownAfterError:;
@end
