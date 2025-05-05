@interface IESECRelationAddAndBuyComponent : UIView
@property (nonatomic) double cornerRadius;
@property (nonatomic) UIButton addToCartButton;
@property (nonatomic) UIButton buyButton;
@property (nonatomic) @? clickAddButtonBlock;
@property (nonatomic) @? clickBuyButtonBlock;
- (id)addToCartButton;
- (void)didTapBuyButton;
- (id)buyButton;
- (id)clickAddButtonBlock;
- (id)clickBuyButtonBlock;
- (void)didTapAddToCartButton;
- (void)p_setupUI;
- (void)setAddToCartButton:;
- (void)setBuyButton:;
- (void)setClickAddButtonBlock:;
- (void)setClickBuyButtonBlock:;
- (void)updateUIWithModel:;
- (id)init;
- (void)setCornerRadius:;
- (void).cxx_destruct;
- (double)cornerRadius;
+ (id)addAndBuyWithHeight:cornerRadius:addButtonWidth:buyButtonWidth:cartDisable:buyButtonUserInteractionEnabled:;
@end
