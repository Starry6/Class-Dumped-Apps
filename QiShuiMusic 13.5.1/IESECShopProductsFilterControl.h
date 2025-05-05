@interface IESECShopProductsFilterControl : NSObject
@property (nonatomic) NSString selectParams;
@property (nonatomic) Q order;
@property (nonatomic) q sortType;
@property (nonatomic) NSNumber selectedPickType;
@property (nonatomic) IESECRelationTagListModel tagList;
@property (nonatomic) double clickTime;
- (id)tagList;
- (double)clickTime;
- (id)selectParams;
- (id)selectedPickType;
- (void)setClickTime:;
- (void)setSelectParams:;
- (void)setSelectedPickType:;
- (void)setTagList:;
- (unsigned long long)order;
- (void).cxx_destruct;
- (void)setOrder:;
- (long long)sortType;
- (void)setSortType:;
@end
