@interface VisionKit.ImageAnalysisInteractionDelegateProxy : NSObject
- (id)init;
- (id)presentingViewControllerForImageAnalysisInteraction:;
- (id)contentsRectForImageAnalysisInteraction:;
- (BOOL)imageAnalysisInteraction:shouldBeginAtPoint:forAnalysisType:;
- (void).cxx_destruct;
- (id)contentViewForImageAnalysisInteraction:;
- (void)imageAnalysisInteraction:liveTextButtonDidChangeToVisible:;
- (void)imageAnalysisInteraction:highlightSelectedItemsValueDidChange:;
@end
