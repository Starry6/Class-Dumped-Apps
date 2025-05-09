@interface IESECWinHybridSortModel : MTLModel
@property (nonatomic) NSArray sortTypes;
@property (nonatomic) NSDictionary layoutStyles;
@property (nonatomic) NSArray subCategoryList;
@property (nonatomic) NSArray filterTypes;
@property (nonatomic) IESECWinGoodsSortModel selectedSortItem;
@property (nonatomic) q currentSort;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)subCategoryList;
- (void)setCurrentSort:;
- (long long)currentSort;
- (id)layoutStyles;
- (id)selectedSortItem;
- (void)setLayoutStyles:;
- (void)setSelectedSortItem:;
- (void)setSortTypes:;
- (void)setSubCategoryList:;
- (id)sortTypes;
- (void).cxx_destruct;
- (id)filterTypes;
- (void)setFilterTypes:;
+ (id)filterTypesJSONTransformer;
+ (id)layoutStylesJSONTransformer;
+ (id)sortTypesJSONTransformer;
+ (id)subCategoryListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
