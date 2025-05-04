@interface AWEKnowledgeRichContentImpl.FullPageFeedPinchComponent : AWEKnowledgeRichContentImpl.FullPageFeedBaseComponent
- (unsigned long long)pinchTransition_destinatedType;
- (BOOL)transition_shouldStartPinchInteractiveTranstionToVC:;
- (BOOL)transition_shouldStartPinchInteractiveTranstionFor:gestureRecognizer:;
- (void)transition_didEndPinchTransitionWith:;
- (id)transition_destinatedViewControllerFor:gestureRecognizer:;
- (void)enterPureModePageIfNeededWithModel:contextProvider:;
- (id)init;
- (void).cxx_destruct;
@end
