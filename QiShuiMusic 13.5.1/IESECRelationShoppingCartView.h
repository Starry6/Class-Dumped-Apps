@interface IESECRelationShoppingCartView : UIView
@property (nonatomic) UIImageView shoppingCartView;
@property (nonatomic) BOOL shoppingCartShown;
@property (nonatomic) BOOL shoppingCartAnimating;
@property (nonatomic) <IESECRelationShoppingCartViewDelegate> delegate;
- (void)didTapShoppingCartView;
- (void)hideShoppingCartAnimated;
- (void)setShoppingCartAnimating:;
- (void)setShoppingCartShown:;
- (void)setShoppingCartView:;
- (BOOL)shoppingCartAnimating;
- (BOOL)shoppingCartShown;
- (id)shoppingCartView;
- (void)showShoppingCartAnimated;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setupViews;
@end
