@interface AWEKnowledgeRichContentImpl.FullPageFeedPanelComponent : AWEKnowledgeRichContentImpl.FullPageFeedBaseComponent
@property (nonatomic) _TtC27AWEKnowledgeRichContentImpl16GradientMaskView gradientMaskView;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:gestureRecognizer:;
- (void)onScrollViewDidScrollWithScrollView:;
- (void)onContainerViewDidSetup;
- (void)onPageModeWillChange:;
- (void)onPageModeDidChage:;
- (void)executePageModeChangeAnimationAfterHeaderHeightUpdate:;
- (void)listVCViewDidLoad:;
- (id)gradientMaskView;
- (BOOL)transition_gestureRecognizer:shouldRecognizeSimultaneouslyWith:;
- (void)setGradientMaskView:;
- (id)init;
- (void).cxx_destruct;
@end
