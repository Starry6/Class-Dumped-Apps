@interface AWEShowTrackerManager : NSObject
@property (nonatomic) NSMutableDictionary showUniversalParams;
@property (nonatomic) NSMutableDictionary recommendDistributeVideoInfoParams;
@property (nonatomic) NSMutableDictionary searchBeforeUniversalParams;
@property (nonatomic) NSMutableDictionary showUniversalLongVideoParams;
@property (nonatomic) NSMutableDictionary searchBeforeUniversalLongVideoParams;
@property (nonatomic) q innerWatchAdCount;
@property (nonatomic) BOOL isInnerRecommend;
- (void)setShowUniversalParamsInPlayletWithFromGroupId:;
- (id)getShowUniversalParams;
- (void)setPlayletInRecommendDistributeVideoInfo:;
- (void)removeRecommendDistributeVideoInfo;
- (id)getRecommendDistributeVideoInfo;
- (void)setShowUniversalParamsWithFromGroupId:referString:;
- (void)willLeaveSearchViewController;
- (void)setInnerWatchAdCount:;
- (void)setShowUniversalParamsWithLongVideoFromGroupId:LongVideoFromAlbumID:referString:;
- (long long)innerWatchAdCount;
- (id)getShowUniversalLongVideoParams;
- (void)setShowUniversalParams:;
- (void)setShowUniversalLongVideoParams:;
- (void)setRecommendDistributeVideoInfoParams:;
- (void)setSearchBeforeUniversalParams:;
- (void)setSearchBeforeUniversalLongVideoParams:;
- (id)searchBeforeUniversalParams;
- (id)showUniversalParams;
- (id)showTrackerRootList;
- (id)searchBeforeUniversalLongVideoParams;
- (id)showUniversalLongVideoParams;
- (id)showTrackerLongVideoRootList;
- (id)recommendDistributeVideoInfoParams;
- (BOOL)isInnerRecommend;
- (void)setIsInnerRecommend:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
