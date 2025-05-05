@interface IESECShopBaseFilterDiffableModel : NSObject
@property (nonatomic) BOOL disableUserInteraction;
@property (nonatomic) NSMutableArray sortTypes;
@property (nonatomic) IESECShopGoodsSortModel selectedSortType;
@property (nonatomic) NSMutableArray pickTypes;
@property (nonatomic) IESECShopGoodsPickTypeModel selectedPickType;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:;
- (id)pickTypes;
- (id)selectedPickType;
- (id)selectedSortType;
- (void)setDisableUserInteraction:;
- (void)setPickTypes:;
- (void)setSelectedPickType:;
- (void)setSelectedSortType:;
- (void)setSortTypes:;
- (id)sortTypes;
- (void).cxx_destruct;
- (BOOL)disableUserInteraction;
@end
