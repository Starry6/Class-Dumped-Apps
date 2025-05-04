@interface AWEPlayInteractionDislikeLeftElement : AWEPlayInteractionBaseActionButtonElement
@property (nonatomic) AWEPlayInteractionDislikeLeftView dislikeLeftView;
@property (nonatomic) AWEPlayInteractionDislikeElementViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)dynamicWidthRemakeLayout;
- (void)viewDidDisposed;
- (BOOL)shouldActivateButtonWithData:;
- (BOOL)p_shouldShow;
- (id)dislikeLeftView;
- (void)setDislikeLeftView:;
- (BOOL)shouldActiveWithModel:;
- (BOOL)shouldShowLeftDislike;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)reset;
@end
