@interface AWEECShoppingAIGuideAnswerLynxCell : AWEECShoppingAIGuideAnswerBaseCell
@property (nonatomic) AWEECShoppingAIGuideLynxCard lynxCard;
@property (nonatomic) AWEECShoppingAIGuideMessageSingleLynxViewModel lynxViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxCard;
- (void)setupCardWithModel:;
- (void)reloadWithSingleMsgViewModel:;
- (void)setLynxViewModel:;
- (void)setLynxCard:;
- (id)lynxViewModel;
- (void)lynxCard:didUpdateSize:;
- (void).cxx_destruct;
@end
