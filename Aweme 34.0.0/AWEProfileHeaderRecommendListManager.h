@interface AWEProfileHeaderRecommendListManager : NSObject
@property (nonatomic) BOOL limit;
@property (nonatomic) q exposeCount;
@property (nonatomic) BOOL immediateLimit;
@property (nonatomic) q limitCount;
@property (nonatomic) q unInteractedCount;
@property (nonatomic) q limitCountFor1kFansLower;
@property (nonatomic) q continualUnInteractedCount;
- (long long)exposeCount;
- (void)setExposeCount:;
- (BOOL)shouldShowRecommendListAutoWithUser:awemeModel:isFromPostWorkList:trackParams:customParam:;
- (void)increaseExposeCount;
- (void)setImmediateLimit:;
- (void)setUnInteractedCount:;
- (id)uidKey:;
- (void)setContinualUnInteractedCount:;
- (void)setLimitCountFor1kFansLower:;
- (BOOL)isFromLower1KFansOrFamiliarWithUser:awemeModel:trackParams:;
- (BOOL)p_shouldShowRecommendWithUserFansLowerThan1k:awemeModel:isFromPostWorkList:trackParams:customParam:;
- (void)recordExposeCountInOneDay;
- (BOOL)hasReachedRecommendCardMaxAutoShowCount;
- (BOOL)p_shouldShowRecommendWithUserFansMoreThan10k:isFromPostWorkList:trackParams:customParam:;
- (BOOL)immediateLimit;
- (BOOL)reachUnInteractedLimitFor1kFansLower;
- (long long)continualUnInteractedCount;
- (long long)unInteractedCount;
- (long long)limitCountFor1kFansLower;
- (id)recommendExposeCountPerDayKey;
- (BOOL)reachUnInteractedLimit;
- (void)removeExposeCountLimit;
- (void)increaseUnInteractedCount;
- (void)increaseContinualUnInteractedCount;
- (void)resetContinualUnInteractedCount;
- (void)limitImmediately;
- (void)removeImmediateLimit;
- (long long)limitCount;
- (BOOL)limit;
- (id)init;
- (void)setLimit:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (void)setLimitCount:;
+ (long long)convertShowMethodTrack:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
