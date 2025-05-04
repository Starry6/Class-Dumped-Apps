@interface AWEPlayInteractionSearchAIGCElement : AWEPlayInteractionRightElement
@property (nonatomic) BDImageView searchAIGCImageView;
@property (nonatomic) UIView backView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidDisappear;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)searchAIGCButtonClick;
- (id)searchAIGCImageView;
- (void)setSearchAIGCImageView:;
- (void)searchAIGCEntranceShowEvent;
- (BOOL)useVoiceInput;
- (void)searchAIGCEntranceClickEvent;
- (void)dealloc;
- (void)viewDidLoad;
- (void)updateLayout;
- (id)backView;
- (void).cxx_destruct;
- (void)setBackView:;
+ (id)activateInfoWithContext:;
@end
