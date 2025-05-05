@interface SKBackgroundAssetConsentViewController : OBWelcomeController
@property (nonatomic) @? responseBlock;
- (id)init;
- (void)dealloc;
- (long long)modalPresentationStyle;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (BOOL)isModalInPresentation;
- (id)responseBlock;
- (void)_continueButtonPressed;
- (void)setResponseBlock:;
@end
