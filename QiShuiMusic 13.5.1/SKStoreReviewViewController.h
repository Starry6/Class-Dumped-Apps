@interface SKStoreReviewViewController : UIViewController
@property (nonatomic) SKInvocationQueueProxy<SKUIServiceReviewViewController> serviceProxy;
@property (nonatomic) _UIAsyncInvocation cancelRequest;
@property (nonatomic) SKRemoteReviewViewController remoteViewController;
@property (nonatomic) NSString reviewRequestToken;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serviceProxy;
- (void)setServiceProxy:;
- (id)remoteViewController;
- (void)dealloc;
- (id)cancelRequest;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (void)setRemoteViewController:;
- (void)viewDidLoad;
- (void)_addRemoteView;
- (void)_requestRemoteViewController;
- (void)remoteReviewViewControllerTerminatedWithError:;
- (id)initWithReviewRequestToken:;
- (void)_didFinishWithResult:error:;
- (void)setCancelRequest:;
- (id)reviewRequestToken;
- (void)setReviewRequestToken:;
@end
