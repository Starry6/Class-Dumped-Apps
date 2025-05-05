@interface QLWebLocationItemViewController : QLItemViewController
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)scrollView;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:context:completionHandler:;
- (BOOL)canEnterFullScreen;
- (BOOL)canPinchToDismiss;
- (void)setAppearance:animated:;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewIndicatorInset;
- (void)_updateConstraintConstants:;
@end
