@interface SKRemoteReviewViewController : _UIRemoteViewController
@property (nonatomic) <SKRemoteReviewViewControllerDelegate> delegate;
@property (nonatomic) SKStoreReviewViewController reviewViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (void)viewServiceDidTerminateWithError:;
- (id)delegate;
- (void).cxx_destruct;
- (void)didFinishWithResult:error:;
- (id)reviewViewController;
- (void)setReviewViewController:;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@end
