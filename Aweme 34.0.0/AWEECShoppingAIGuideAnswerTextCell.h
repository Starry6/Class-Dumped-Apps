@interface AWEECShoppingAIGuideAnswerTextCell : AWEECShoppingAIGuideAnswerBaseCell
@property (nonatomic) AWEECShoppingAIGuideMessageSingleTextViewModel textViewModel;
@property (nonatomic) AWEECShoppingAIGuideGrowingLabel lastLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupCardWithModel:;
- (void)reloadWithSingleMsgViewModel:;
- (void)setLastLabel:;
- (void)operateTyperWriterNoti:;
- (id)textViewModel;
- (void)setTextViewModel:;
- (void)growingLabelDidUpdateHeight:;
- (void)growingLabelDidFold:;
- (void)growingLabelDidCompleteTypewriter:;
- (void)dealloc;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)lastLabel;
@end
