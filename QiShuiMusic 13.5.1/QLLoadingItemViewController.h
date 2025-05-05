@interface QLLoadingItemViewController : QLItemViewController
- (void)setDelegate:;
- (void).cxx_destruct;
- (BOOL)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:context:completionHandler:;
- (BOOL)canEnterFullScreen;
- (BOOL)canPinchToDismiss;
- (void)previewBecameFullScreen:animated:;
- (void)_updateLoadingLabel;
@end
