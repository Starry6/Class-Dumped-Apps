@interface IESECStoreFilterDiffableModel : IESECShopBaseFilterDiffableModel
@property (nonatomic) q currentSortType;
@property (nonatomic) BOOL search;
@property (nonatomic) NSArray selectButtons;
@property (nonatomic) BOOL hideSelectedButton;
@property (nonatomic) IESECShopBizExtraModel bizExtra;
- (id)bizExtra;
- (BOOL)hideSelectedButton;
- (id)selectButtons;
- (void)setBizExtra:;
- (void)setHideSelectedButton:;
- (void)setSelectButtons:;
- (void).cxx_destruct;
- (void)setSearch:;
- (BOOL)isSearch;
- (void)setCurrentSortType:;
- (long long)currentSortType;
@end
