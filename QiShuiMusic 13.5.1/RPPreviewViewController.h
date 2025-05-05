@interface RPPreviewViewController : UIViewController
@property (nonatomic) BOOL wasStatusBarHidden;
@property (nonatomic) NSURL movieURL;
@property (nonatomic) RPVideoEditorHostViewController hostViewController;
@property (nonatomic) <RPPreviewViewControllerDelegate> previewControllerDelegate;
- (void)viewDidDisappear:;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (id)movieURL;
- (id)hostViewController;
- (void)setHostViewController:;
- (void)setMovieURL:;
- (void)extensionDidFinishWithActivityTypes:;
- (void)videoEditor:didFinishWithActivityTypes:;
- (id)previewControllerDelegate;
- (void)setPreviewControllerDelegate:;
- (BOOL)wasStatusBarHidden;
- (void)setWasStatusBarHidden:;
+ (void)viewControllerForExtension:inputItems:completionHandler:;
+ (void)loadPreviewViewControllerWithMovieURL:completion:;
+ (void)loadPreviewViewControllerWithMovieURL:attachmentURL:overrideShareMessage:overrideTintColor:completion:;
@end
