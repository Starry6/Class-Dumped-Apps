@interface AWEShareTokenNoteEcommerceShopView : AWEShareTokenNoteBaseCardView
@property (nonatomic) BOOL isShopWindow;
- (void)setupUIWithModel:;
- (id)initWithModel:ShopWindow:;
- (void)setIsShopWindow:;
- (void)goToShop;
- (BOOL)isShopWindow;
- (id)truncatedString:;
- (void)layoutSubviews;
@end
