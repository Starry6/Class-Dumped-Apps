@interface AWEPlayInteractionEcomButtonElement : AWEPlayInteractionBaseActionButtonElement
@property (nonatomic) AWEPlayInteractionEcomButtonView ecomButtonView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (BOOL)shouldActivateButtonWithData:;
- (id)ecomButtonView;
- (void)updateEcomButton;
- (void)ecomButtonTapped;
- (BOOL)shouldShowEcomButton;
- (void)setEcomButtonView:;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
