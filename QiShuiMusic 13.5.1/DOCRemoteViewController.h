@interface DOCRemoteViewController : _UIRemoteViewController
@property (nonatomic) DOCRemoteContext hostContext;
@property (nonatomic) DOCConfiguration configuration;
@property (nonatomic) BOOL isBrowserViewController;
@property (nonatomic) DOCAppearance lastAppearance;
@property (nonatomic) <DOCRemoteViewControllerDelegate> delegate;
- (void)setDelegate:;
- (void)viewServiceDidTerminateWithError:;
- (void)setConfiguration:;
- (id)configuration;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)hostContext;
- (void)setHostContext:;
- (void)updateAppearance:completionBlock:;
- (void)updateAppearance:shouldFlushCA:completionBlock:;
- (void)updateEditingTo:animated:;
- (BOOL)isBrowserViewController;
- (void)setIsBrowserViewController:;
- (id)lastAppearance;
- (void)setLastAppearance:;
+ (id)serviceExtension;
+ (id)instantiateRemoteViewControllerWithConfiguration:transparent:errorHandler:hostProxy:completionHandler:;
+ (id)instantiateRemoteDocumentBrowserViewControllerWithHostProxy:configuration:completionBlock:;
+ (id)instantiateRemoteTargetSelectionBrowserViewControllerWithHostProxy:configuration:completionBlock:;
@end
