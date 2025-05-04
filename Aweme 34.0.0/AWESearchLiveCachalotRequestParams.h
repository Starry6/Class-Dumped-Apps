@interface AWESearchLiveCachalotRequestParams : AWESearchResultCachalotRequestParams
@property (nonatomic) AWESearchSmartPagingAdapter smartPagingAdpater;
@property (nonatomic) NSString pagingFeatureInfo;
@property (nonatomic) @? enterFromForParamsBlock;
@property (nonatomic) @? fromGroupIDParamsBlock;
@property (nonatomic) @? searchExtraParamsBlock;
- (id)refreshParams;
- (id)generateParams;
- (id)enterFromForParamsBlock;
- (void)setEnterFromForParamsBlock:;
- (id)fromGroupIDParamsBlock;
- (void)setFromGroupIDParamsBlock:;
- (id)searchExtraParamsBlock;
- (void)setSearchExtraParamsBlock:;
- (id)smartPagingAdpater;
- (void)setPagingFeatureInfo:;
- (id)pagingFeatureInfo;
- (void)setSmartPagingAdpater:;
- (void).cxx_destruct;
@end
