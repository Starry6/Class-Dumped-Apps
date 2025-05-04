@interface AWEPlayInteractionRelatedTemplateNewBottomElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEPlayInteractionRelatedTemplateView relatedTemplateView;
@property (nonatomic) AWEPlayInteractionRelatedTemplateViewModel viewModel;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:;
- (id)relatedTemplateView;
- (void)setRelatedTemplateView:;
- (id)viewModel;
- (void)viewDidLoad;
- (id)identifier;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)reset;
@end
