@interface QLPasswordItemViewController : QLItemViewController
- (void).cxx_destruct;
- (void)loadView;
- (void)invalidate;
- (void)userDidEnterPassword:forPasswordView:;
- (BOOL)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:context:completionHandler:;
- (BOOL)canEnterFullScreen;
- (BOOL)canPinchToDismiss;
- (void)previewDidAppear:;
- (void)previewWillDisappear:;
- (id)passwordView;
@end
