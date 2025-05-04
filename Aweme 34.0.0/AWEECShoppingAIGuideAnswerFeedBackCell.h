@interface AWEECShoppingAIGuideAnswerFeedBackCell : AWEECShoppingAIGuideAnswerBaseCell
@property (nonatomic) AWEECShoppingAIGuideFeedbackCard feedbackCard;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupCardWithModel:;
- (void)reloadWithSingleMsgViewModel:;
- (void)setFeedbackCard:;
- (void)loadFeedbackCard:;
- (void)cellCard:updateFeedBackLikeWithMsgID:isLike:;
- (id)feedbackCard;
- (void).cxx_destruct;
@end
