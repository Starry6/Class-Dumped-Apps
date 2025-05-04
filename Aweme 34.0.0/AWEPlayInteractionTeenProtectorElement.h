@interface AWEPlayInteractionTeenProtectorElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWETeenVideoVoteView teenVideoVoteView;
@property (nonatomic) AWETeenVideoVoteViewElementViewModel viewModel;
- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (BOOL)shouldAppearWithData:;
- (void)trackOnDisplay;
- (id)teenVideoVoteView;
- (void)updateTeenVideoVoteView;
- (void)setTeenVideoVoteView:;
- (id)init;
- (id)viewModel;
- (void)viewDidLoad;
- (id)identifier;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
