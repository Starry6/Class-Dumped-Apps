@interface AWEFollowFeedSortEmptyMonitor : NSObject
@property (nonatomic) BOOL preSortHasMore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPreSortHasMore:;
- (BOOL)preSortHasMore;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)awemeStatsParamsWithAweme:;
+ (void)followFeedStatsWithScene:completionBlock:;
+ (void)followFeedStats:awemeModel:isShowSortEnd:;
+ (void)trackHasMoreSort:itemIDs:scene:intervalTime:isShowSortEnd:;
+ (void)fetchSortHasMore;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
