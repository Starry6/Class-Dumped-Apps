@interface AWEECShoppingAIGuideTextCard : AWEECShoppingAIGuideBaseCard
@property (nonatomic) AWEECShoppingAIGuideMessageSingleTextViewModel textViewModel;
@property (nonatomic) AWEECShoppingAIGuideGrowingLabel label;
- (void)setupUIWithModel:;
- (id)textViewModel;
- (void)setTextViewModel:;
- (void)updateTextWithMessageModel:;
- (void)updateTextWithFont:textColor:;
- (void)updateTextDelegate:;
- (void)updateTextTypewriterEnable:;
- (void)updateText:callTrace:;
- (void)updateTextLongPressAction:;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
@end
