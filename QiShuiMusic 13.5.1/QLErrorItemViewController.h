@interface QLErrorItemViewController : QLItemViewController
@property (nonatomic) QLItem previewItem;
@property (nonatomic) NSError error;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)canSwipeToDismiss;
- (id)errorView;
- (void)loadPreviewControllerWithContents:context:completionHandler:;
- (BOOL)canEnterFullScreen;
- (BOOL)canPinchToDismiss;
- (id)previewItem;
- (void)setPreviewItem:;
- (void)_updateLabelsWithCurrentErrorIfNeeded;
@end
