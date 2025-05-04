@interface AWERelationFollowCleanListDataController : AWEBaseDataController
@property (nonatomic) q currentIndex;
@property (nonatomic) q vcdCount;
@property (nonatomic) q hotsoonHasMore;
@property (nonatomic) BOOL unreadNeedTotal;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHotsoonHasMore:;
- (long long)hotsoonHasMore;
- (BOOL)unreadNeedTotal;
- (void)setUnreadNeedTotal:;
- (void)fetchDataWithType:sourceType:completion:;
- (void)fetchCategoryCountCompletion:;
- (void)__fetchDataWithType:sourceType:completion:;
- (id)paramsWithFetchType:sourceType:;
- (long long)vcdCount;
- (void)setVcdCount:;
- (void)fetchDataWithType:completion:;
- (void)setCurrentIndex:;
- (long long)currentIndex;
@end
