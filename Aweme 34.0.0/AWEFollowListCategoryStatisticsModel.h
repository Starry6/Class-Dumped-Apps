@interface AWEFollowListCategoryStatisticsModel : AWEBaseApiModel
@property (nonatomic) NSNumber postCount;
@property (nonatomic) NSNumber liveCount;
@property (nonatomic) NSNumber shopCount;
- (id)liveCount;
- (void)setLiveCount:;
- (id)shopCount;
- (void)setShopCount:;
- (id)postCount;
- (void).cxx_destruct;
- (void)setPostCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
