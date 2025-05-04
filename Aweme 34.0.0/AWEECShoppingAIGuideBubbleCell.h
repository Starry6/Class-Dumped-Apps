@interface AWEECShoppingAIGuideBubbleCell : AWEECShoppingAIGuideBaseCell
@property (nonatomic) double contentMaxWidth;
@property (nonatomic) AWEECShoppingAIGuideMessageSingleViewModel viewModel;
@property (nonatomic) Q role;
@property (nonatomic) AWEECShoppingAIGuideBubble bubbleView;
@property (nonatomic) AWEECShoppingAIGuideBaseCard cardView;
- (void)setupCardWithModel:;
- (void)reloadWithSingleMsgViewModel:;
- (double)contentMaxWidth;
- (void)setupCardInBubble:;
- (BOOL)animateFromLeft;
- (void)setContentMaxWidth:;
- (unsigned long long)role;
- (void)prepareForReuse;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setRole:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)animatingView;
- (void)setupUI;
- (id)cardView;
- (void)setCardView:;
- (id)bubbleView;
- (void)setBubbleView:;
@end
