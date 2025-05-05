@interface IESECShopProductsHybridResponse : IESECBaseApiModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) IESECListKitListModel hybridList;
@property (nonatomic) NSString paginationParams;
@property (nonatomic) NSString toastText;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) IESECShopBizExtraModel bizExtra;
- (id)bizExtra;
- (id)hybridList;
- (id)logExtra;
- (id)paginationParams;
- (void)setBizExtra:;
- (void)setHybridList:;
- (void)setLogExtra:;
- (void)setPaginationParams:;
- (void)setToastText:;
- (id)toastText;
- (void)setHasMore:;
- (void).cxx_destruct;
- (BOOL)hasMore;
+ (id)JSONKeyPathsByPropertyKey;
@end
