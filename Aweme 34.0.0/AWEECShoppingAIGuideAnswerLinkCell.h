@interface AWEECShoppingAIGuideAnswerLinkCell : AWEECShoppingAIGuideAnswerBaseCell
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupCardWithModel:;
- (void)reloadWithSingleMsgViewModel:;
- (void)cellCard:moreInfoData:;
- (void)adjustQueryCellUI:;
@end
