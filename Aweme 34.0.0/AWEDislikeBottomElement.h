@interface AWEDislikeBottomElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEDislikeButtonView dislikeLeftView;
@property (nonatomic) AWEPlayInteractionDislikeElementViewModel viewModel;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:;
- (id)dislikeLeftView;
- (void)setDislikeLeftView:;
- (void)trackDislikeClicked;
- (void)didCancelDislike:;
- (void)didClickDislike;
- (id)viewModel;
- (void)viewDidLoad;
- (id)identifier;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)reset;
@end
