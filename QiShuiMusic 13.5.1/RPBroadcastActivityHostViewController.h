@interface RPBroadcastActivityHostViewController : _UIRemoteViewController
@property (nonatomic) RPBroadcastActivityViewController broadcastActivityViewController;
- (unsigned long long)popoverArrowDirection;
- (long long)modalPresentationStyle;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)extensionDidFinishWithLaunchURL:broadcastURL:extensionBundleID:cancelled:;
- (id)presentationInfoWithCompletion:;
- (id)popoverControllerSourceRect;
- (id)broadcastActivityViewController;
- (void)setBroadcastActivityViewController:;
@end
