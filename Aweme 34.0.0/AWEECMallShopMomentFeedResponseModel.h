@interface AWEECMallShopMomentFeedResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q cursor;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSArray recommendInfoList;
@property (nonatomic) BOOL entranceItemMiss;
@property (nonatomic) NSString missToast;
@property (nonatomic) NSString missItemID;
- (id)awemeList;
- (void)setAwemeList:;
- (id)recommendInfoList;
- (BOOL)entranceItemMiss;
- (id)missItemID;
- (void)setMissItemID:;
- (id)missToast;
- (void)setMissToast:;
- (void)setRecommendInfoList:;
- (void)setEntranceItemMiss:;
- (long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
