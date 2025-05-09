@interface AWEECShoppingAIGuideWelcomeCell : AWEECShoppingAIGuideBaseCell
@property (nonatomic) AWEECShoppingAIGuideMessageGroupViewModel welcomeViewModel;
@property (nonatomic) AWEECShoppingAIGuideTextCard welcomeTextCard;
@property (nonatomic) AWEECShoppingAIGuideLynxCard welcomeLynxCard;
@property (nonatomic) AWEECShoppingAIGuideAgreementTipView agreementTipView;
@property (nonatomic) AWEECShoppingAIGuideIncomingBubble welcomeTextBubble;
@property (nonatomic) double lynxCardHeight;
@property (nonatomic) AWEECShoppingAIGuideCardSettingProvider cardProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cardProvider;
- (void)setCardProvider:;
- (void)lynxCard:didUpdateSize:;
- (BOOL)shouldHideAgree;
- (id)agreementTipView;
- (id)welcomeTextBubble;
- (id)welcomeLynxCard;
- (id)welcomeTextCard;
- (id)welcomeViewModel;
- (void)setWelcomeViewModel:;
- (void)updateOldWelcomeCellWithModel:;
- (void)setWelcomeTextCard:;
- (void)setWelcomeLynxCard:;
- (void)setAgreementTipView:;
- (void)setWelcomeTextBubble:;
- (double)lynxCardHeight;
- (void)setLynxCardHeight:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateUI;
- (void)updateWithViewModel:;
+ (double)cellHeightForViewModel:withContext:;
@end
