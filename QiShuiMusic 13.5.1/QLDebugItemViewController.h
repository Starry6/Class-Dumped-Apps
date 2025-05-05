@interface QLDebugItemViewController : QLItemViewController
- (void).cxx_destruct;
- (BOOL)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:context:completionHandler:;
- (BOOL)canEnterFullScreen;
- (BOOL)canPinchToDismiss;
- (void)previewWillAppear:;
- (void)previewIsAppearingWithProgress:;
- (void)previewWillFinishAppearing;
- (void)previewDidAppear:;
- (void)previewWillDisappear:;
- (void)previewDidDisappear:;
- (void)setAppearance:animated:;
- (void)_encounterMethodCall:;
- (void)_encounterMethodCall:animatedValue:;
- (void)_addLog:logLevel:;
- (id)_attributesForLogLevel:;
@end
