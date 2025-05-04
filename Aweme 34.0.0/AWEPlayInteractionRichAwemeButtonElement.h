@interface AWEPlayInteractionRichAwemeButtonElement : AWEPlayInteractionBaseActionButtonElement
@property (nonatomic) <AWERichAwemeButtonElementViewControllerProtocol> buttonViewController;
@property (nonatomic) NSTimer appearTimer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (BOOL)shouldActivateButtonWithData:;
- (id)buttonViewController;
- (void)startAppearTimer;
- (void)stopAppearTimer;
- (id)appearTimer;
- (void)setAppearTimer:;
- (BOOL)shouldShowSpeicalAwemeBottomButton;
- (void)setButtonViewController:;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)reset;
@end
