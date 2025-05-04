@interface AWEECShoppingAIGuideAnswerSliceCell : AWEECShoppingAIGuideAnswerBaseCell
@property (nonatomic) AWEECShoppingAIGuideMessageSingleSliceViewModel sliceViewModel;
@property (nonatomic) AWEECShoppingAIGuideSliceCard sliceCard;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupCardWithModel:;
- (void)reloadWithSingleMsgViewModel:;
- (void)setSliceViewModel:;
- (id)sliceCard;
- (void)setSliceCard:;
- (id)sliceViewModel;
- (void)sliceCard:didUpdateSize:;
- (void).cxx_destruct;
@end
