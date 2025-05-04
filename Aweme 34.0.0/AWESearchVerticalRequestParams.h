@interface AWESearchVerticalRequestParams : AWESearchResultCachalotRequestParams
@property (nonatomic) NSString from;
@property (nonatomic) NSDictionary filterParams;
@property (nonatomic) BOOL isFilterSearch;
@property (nonatomic) BOOL isNativeFilter;
@property (nonatomic) NSDictionary searchExtraParams;
@property (nonatomic) NSString pagingFeatureInfo;
@property (nonatomic) q columnNum;
@property (nonatomic) NSString containerPageName;
- (id)searchExtraParams;
- (void)setSearchExtraParams:;
- (void)setFilterParams:;
- (id)filterParams;
- (BOOL)isFilterSearch;
- (void)setIsFilterSearch:;
- (id)refreshParams;
- (id)generateParams;
- (void)setColumnNum:;
- (void)setPagingFeatureInfo:;
- (id)pagingFeatureInfo;
- (void)setContainerPageName:;
- (void)setIsNativeFilter:;
- (BOOL)isNativeFilter;
- (id)containerPageName;
- (void).cxx_destruct;
- (void)setFrom:;
- (id)from;
- (long long)columnNum;
@end
