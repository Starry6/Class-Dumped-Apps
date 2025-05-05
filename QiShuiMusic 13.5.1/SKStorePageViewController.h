@interface SKStorePageViewController : UIViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)productViewControllerDidFinish:;
- (void).cxx_destruct;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:bundle:;
- (void)_addRemoteView;
- (void)_requestRemoteViewController;
- (void)_didFinishWithResult:error:;
- (void)loadPageWithURL:completionBlock:;
- (void)loadPageWithURLBagKey:completionBlock:;
- (void)_showProductPageWithItemIdentifier:;
- (void)_didLoadWithResult:error:;
- (void)_dismissProductPageViewController;
- (void)_prepareToLoadWithCompletionBlock:;
@end
