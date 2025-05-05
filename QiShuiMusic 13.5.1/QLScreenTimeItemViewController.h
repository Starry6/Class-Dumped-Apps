@interface QLScreenTimeItemViewController : QLItemViewController
@property (nonatomic) q policy;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString categoryIdentifier;
@property (nonatomic) STBlockingViewController blockingViewController;
- (void)setCategoryIdentifier:;
- (void)setPolicy:;
- (id)bundleIdentifier;
- (long long)policy;
- (id)initWithBundleIdentifier:;
- (id)categoryIdentifier;
- (void)setBundleIdentifier:;
- (void).cxx_destruct;
- (void)hideBlockingViewControllerWithCompletionHandler:;
- (BOOL)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:context:completionHandler:;
- (BOOL)canEnterFullScreen;
- (BOOL)canPinchToDismiss;
- (id)initWithCategoryIdentifier:;
- (void)showBlockingViewControllerWithPolicy:;
- (void)_updateBlockingViewControllerWithCurrentPolicy;
- (id)blockingViewController;
- (void)setBlockingViewController:;
@end
