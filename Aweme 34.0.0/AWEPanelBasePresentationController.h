@interface AWEPanelBasePresentationController : UIPresentationController
@property (nonatomic) BOOL presenting;
@property (nonatomic) BOOL dismissing;
@property (nonatomic) UIView transitionBackgroundView;
- (void)transitionBackgroundViewTapped:;
- (void)preferredContentSizeDidChangeForChildContentContainer:;
- (BOOL)isPresenting;
- (BOOL)shouldPresentInFullscreen;
- (void)dismissalTransitionDidEnd:;
- (void)setDismissing:;
- (BOOL)isDismissing;
- (void)presentationTransitionWillBegin;
- (void)setPresenting:;
- (void).cxx_destruct;
- (void)presentationTransitionDidEnd:;
- (void)dismissalTransitionWillBegin;
- (void)containerViewDidLayoutSubviews;
- (BOOL)shouldRemovePresentersView;
- (void)setTransitionBackgroundView:;
- (id)transitionBackgroundView;
+ (void)setupBackConfirmTextProvider:;
+ (void)_aweLazyRegisterLoad_Localization;
@end
