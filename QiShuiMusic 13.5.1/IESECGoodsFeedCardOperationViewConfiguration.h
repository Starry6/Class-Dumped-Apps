@interface IESECGoodsFeedCardOperationViewConfiguration : NSObject
@property (nonatomic) NSArray activatedItemTypes;
@property (nonatomic) BOOL hideAddToShoppingCartButton;
@property (nonatomic) double buyButtonCornerRadius;
- (void)setHideAddToShoppingCartButton:;
- (id)activatedItemTypes;
- (double)buyButtonCornerRadius;
- (BOOL)hideAddToShoppingCartButton;
- (void)setActivatedItemTypes:;
- (void)setBuyButtonCornerRadius:;
- (id)init;
- (void).cxx_destruct;
@end
