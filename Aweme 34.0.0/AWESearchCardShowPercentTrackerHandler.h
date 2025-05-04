@interface AWESearchCardShowPercentTrackerHandler : NSObject
@property (nonatomic) q deepestRank;
@property (nonatomic) AWEGeneralSearchModel deepestSearchModel;
@property (nonatomic) NSMutableSet deepestSearchModelSet;
@property (nonatomic) NSString searchId;
- (id)searchId;
- (void)setSearchId:;
- (double)calculateVisibleCardShowPercent:cardFrame:;
- (BOOL)isNotViewedCard:cardFrame:;
- (long long)deepestRank;
- (void)setDeepestRank:;
- (void)setDeepestSearchModel:;
- (BOOL)waterFallEmpleShowTrackEnable;
- (id)deepestSearchModel;
- (id)deepestSearchModelSet;
- (void)trackCardAmpleShowWithModel:searchId:keyword:;
- (void)updateDeepesetSearchModel:;
- (void)trackerDeepesetRankCardShowPercent:;
- (void)setDeepestSearchModelSet:;
- (id)init;
- (void)resetData;
- (void).cxx_destruct;
- (BOOL)isValidDictionary:;
@end
