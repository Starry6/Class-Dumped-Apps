@interface IESECShopGoodsListFooterDiffableModel : NSObject
@property (nonatomic) BOOL promotionActive;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:;
- (BOOL)isPromotionActive;
- (void)setPromotionActive:;
@end
