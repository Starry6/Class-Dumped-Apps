@interface OBPrivacyCombinedController : OBTableWelcomeController
@property (nonatomic) UIColor customTintColor;
@property (nonatomic) BOOL underlineLinks;
@property (nonatomic) BOOL allowsOpeningSafari;
@property (nonatomic) NSString displayLanguage;
@property (nonatomic) BOOL presentedFromPrivacyPane;
- (id)initWithIdentifiers:;
- (id)displayLanguage;
- (id)init;
- (void)setDisplayLanguage:;
- (void).cxx_destruct;
- (void)setCustomTintColor:;
- (void)viewDidAppear:;
- (BOOL)underlineLinks;
- (void)setUnderlineLinks:;
- (id)customTintColor;
- (BOOL)allowsOpeningSafari;
- (void)setAllowsOpeningSafari:;
- (BOOL)presentedFromPrivacyPane;
- (void)setPresentedFromPrivacyPane:;
+ (id)new;
+ (void)presentPrivacyCombinedControllerOverController:dismissHandler:;
@end
