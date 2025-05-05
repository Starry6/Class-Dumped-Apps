@interface SKCloudServiceSetupRemoteViewController : _UIRemoteViewController
@property (nonatomic) <SKCloudServiceSetupRemoteViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)overrideCreditCardPresentationWithCompletion:;
- (void)overrideRedeemCameraPerformAction:withObject:;
- (void)didFinishLoadingWithSuccess:error:;
- (void)dismissCloudServiceSetupViewControllerAnimated:completion:;
- (void)dismissSafariViewControllerAnimated:completion:;
- (void)presentSafariViewControllerWithURL:animated:completion:;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@end
