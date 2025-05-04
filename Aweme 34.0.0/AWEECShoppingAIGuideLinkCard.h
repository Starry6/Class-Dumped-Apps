@interface AWEECShoppingAIGuideLinkCard : AWEECShoppingAIGuideBaseCard
@property (nonatomic) AWEECShoppingAIGuideMessageSingleLinkViewModel linkViewModel;
@property (nonatomic) UIImageView arrow;
@property (nonatomic) UILabel label;
- (void)setupUIWithModel:;
- (void)setLinkViewModel:;
- (id)linkViewModel;
- (void)tapView:;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (id)arrow;
- (void)setArrow:;
@end
