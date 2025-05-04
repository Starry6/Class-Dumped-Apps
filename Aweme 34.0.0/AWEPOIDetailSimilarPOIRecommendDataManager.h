@interface AWEPOIDetailSimilarPOIRecommendDataManager : AWEListDataController
@property (nonatomic) NSArray recommendData;
@property (nonatomic) q cursor;
@property (nonatomic) NSString poiID;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)poiID;
- (void)setPoiID:;
- (id)recommendData;
- (void)setRecommendData:;
- (long long)cursor;
- (id)init;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
