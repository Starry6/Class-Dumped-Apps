@interface IESECWinFeedNavBar : UIView
@property (nonatomic) UIButton backButton;
@property (nonatomic) UIButton shopCartButton;
@property (nonatomic) UILabel addToCartHintLabel;
@property (nonatomic) UILabel label;
@property (nonatomic) <IESECWinFeedNavBarDelegate> delegate;
- (id)addToCartHintLabel;
- (void)backButtonDidTap:;
- (void)cartButtonDidTap:;
- (void)setAddToCartHintLabel:;
- (void)setShopCartButton:;
- (id)shopCartButton;
- (void)updateShoppingCartLabelCount:;
- (void)setDelegate:;
- (id)backButton;
- (void)setLabel:;
- (id)label;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setBackButton:;
- (void)setupViews;
@end
