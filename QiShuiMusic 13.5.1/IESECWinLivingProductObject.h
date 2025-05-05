@interface IESECWinLivingProductObject : NSObject
@property (nonatomic) Q itemType;
@property (nonatomic) IESECRelationGoodsCardViewModel product;
@property (nonatomic) q rank;
@property (nonatomic) Q tabType;
@property (nonatomic) q itemIndex;
@property (nonatomic) NSDictionary uiLogExtra;
@property (nonatomic) NSNumber hotSalesWidth;
- (unsigned long long)tabType;
- (id)diffIdentifier;
- (id)edgeForObject;
- (id)hotSalesWidth;
- (BOOL)isEqualToDiffableObject:;
- (void)setHotSalesWidth:;
- (void)setTabType:;
- (void)setUiLogExtra:;
- (id)uiLogExtra;
- (void)setItemType:;
- (long long)rank;
- (unsigned long long)itemType;
- (void).cxx_destruct;
- (void)setRank:;
- (long long)itemIndex;
- (void)setItemIndex:;
- (id)product;
- (void)setProduct:;
@end
