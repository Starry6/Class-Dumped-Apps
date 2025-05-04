@interface AWEASDiscoverSuggestionManager : NSObject
@property (nonatomic) NSArray dataList;
@property (nonatomic) NSString recommendQuery;
- (void)setDataList:;
- (void)setRecommendQuery:;
- (void)fetchDataWithCompleteBlock:;
- (id)recommendQuery;
- (void).cxx_destruct;
- (void)clearCachedData;
- (id)dataList;
+ (id)sharedManager;
@end
