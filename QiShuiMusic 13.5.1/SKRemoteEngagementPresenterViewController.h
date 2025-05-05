@interface SKRemoteEngagementPresenterViewController : UIViewController
@property (nonatomic) SKRemoteEngagementRemoteViewController remoteViewController;
@property (nonatomic) NSObject<OS_dispatch_queue> engagementPresentationQueue;
@property (nonatomic) NSObject<OS_dispatch_semaphore> remoteViewControllerSemaphore;
@property (nonatomic) <SKEngagementPresenterProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)remoteViewController;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setRemoteViewController:;
- (void)viewDidLoad;
- (void)_addRemoteView;
- (void)presentEngagementRequestData:clientBundleID:completion:;
- (void)_loadRemoteViewController;
- (id)engagementPresentationQueue;
- (id)remoteViewControllerSemaphore;
@end
