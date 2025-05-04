@interface AWEECShoppingAIGuideSugCard : AWEECShoppingAIGuideBaseCard
@property (nonatomic) AWEECShoppingAIGuideMessageSingleSugViewModel sugCardModel;
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView arrow;
- (void)setupUIWithModel:;
- (void)tapView:;
- (id)sugCardModel;
- (void)setSugCardModel:;
- (void)setLabel:;
- (void)willMoveToSuperview:;
- (id)label;
- (void).cxx_destruct;
- (id)arrow;
- (void)setArrow:;
@end
