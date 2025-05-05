@interface RPBroadcastActivityViewController : UIViewController
@property (nonatomic) UIPopoverPresentationController popoverPresentationControllerProxy;
@property (nonatomic) RPBroadcastActivityHostViewController hostViewController;
@property (nonatomic) @? didFinishHandler;
@property (nonatomic) <RPBroadcastActivityViewControllerDelegate> delegate;
- (id)popoverPresentationController;
- (void)setDelegate:;
- (void)dismissViewControllerAnimated:completion:;
- (void)setModalPresentationStyle:;
- (id)delegate;
- (void).cxx_destruct;
- (id)didFinishHandler;
- (void)setDidFinishHandler:;
- (id)hostViewController;
- (void)setHostViewController:;
- (void)extensionDidFinishWithLaunchURL:broadcastURL:extensionBundleID:cancelled:;
- (id)popoverPresentationControllerProxy;
- (void)setPopoverPresentationControllerProxy:;
+ (void)viewControllerForExtension:inputItems:completionHandler:;
+ (void)loadBroadcastActivityViewControllerWithPreferredExtension:handler:;
+ (void)loadBroadcastActivityViewControllerWithHandler:;
+ (void)loadBroadcastActivityViewControllerWithPreferredExtension:handler:broadcastActivitiesNotInstalledAlertTitle:broadcastActivitiesNotInstalledAlertMessage:atPoint:fromWindow:;
@end
