@interface IESIMPanelBasePresentationController : UIPresentationController
@property (nonatomic) BOOL presenting;
@property (nonatomic) BOOL dismissing;
@property (nonatomic) UIView transitionBackgroundView;
- (void)transitionBackgroundViewTapped:;
- (void)setPresenting:;
- (BOOL)shouldPresentInFullscreen;
- (void)presentationTransitionWillBegin;
- (void)preferredContentSizeDidChangeForChildContentContainer:;
- (void)presentationTransitionDidEnd:;
- (void)dismissalTransitionDidEnd:;
- (BOOL)isPresenting;
- (void)dismissalTransitionWillBegin;
- (void)setDismissing:;
- (void).cxx_destruct;
- (BOOL)isDismissing;
- (void)containerViewDidLayoutSubviews;
- (BOOL)shouldRemovePresentersView;
- (id)transitionBackgroundView;
- (void)setTransitionBackgroundView:;
@end
