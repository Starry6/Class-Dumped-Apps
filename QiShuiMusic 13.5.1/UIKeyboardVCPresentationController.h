@interface UIKeyboardVCPresentationController : UIPresentationController
- (BOOL)_shouldKeepCurrentFirstResponder;
- (BOOL)shouldPresentInFullscreen;
- (id)frameOfPresentedViewInContainerView;
- (id)sizeForChildContentContainer:withParentContainerSize:;
@end
