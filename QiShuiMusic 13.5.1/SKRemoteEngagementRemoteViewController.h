@interface SKRemoteEngagementRemoteViewController : _UIRemoteViewController
@property (nonatomic) <SKEngagementPresenterProtocol> delegate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)engagementTaskDidFinishWithResult:resultData:error:completion:;
- (void)preferredContentSizeDidChange:;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@end
