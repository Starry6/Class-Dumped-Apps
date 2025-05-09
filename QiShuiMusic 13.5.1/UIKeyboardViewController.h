@interface UIKeyboardViewController : UIViewController
@property (nonatomic) Q serviceRole;
@property (nonatomic) UIKeyboard keyboard;
@property (nonatomic) UIInputViewController inputViewController;
@property (nonatomic) UISystemInputAssistantViewController systemInputAssistantViewController;
@property (nonatomic) UIView<UIKeyInput> textInputView;
@property (nonatomic) UIView pathEffectView;
@property (nonatomic) UIView inputAssistantView;
@property (nonatomic) UIKeyboardAutocorrectionController autocorrectionController;
@property (nonatomic) BOOL shouldUpdateLayoutAutomatically;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldUpdateLayoutAutomatically;
- (void)setServiceRole:;
- (id)pathEffectView;
- (id)inputAssistantView;
- (id)autocorrectionController;
- (id)keyboard;
- (unsigned long long)serviceRole;
- (id)init;
- (id)inputViewController;
- (void)setShouldUpdateLayoutAutomatically:;
- (id)systemInputAssistantViewController;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (void)loadView;
- (id)textInputView;
- (void)setInputViewController:;
- (void)viewDidLoad;
- (id)initWithServiceRole:;
- (void)registerProxyKeysWithViews:;
- (void)didSelectPredictiveCandidate:;
- (void)shouldAcceptAutocorrection;
- (void)setTextInputView:;
- (void)setKeyboard:;
- (void)setSystemInputAssistantViewController:;
@end
