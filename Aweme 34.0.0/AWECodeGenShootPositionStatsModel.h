@interface AWECodeGenShootPositionStatsModel : AWEBaseDataModel
@property (nonatomic) BOOL isCollected;
@property (nonatomic) NSInteger collectCount;
@property (nonatomic) NSInteger postCount;
@property (nonatomic) NSInteger playCount;
@property (nonatomic) q status;
@property (nonatomic) q totalLikeCnt;
@property (nonatomic) BOOL isReviewing;
- (BOOL)isCollected;
- (void)setIsCollected:;
- (void)setCollectCount:;
- (int)collectCount;
- (void)setIsReviewing:;
- (long long)totalLikeCnt;
- (void)setTotalLikeCnt:;
- (BOOL)isReviewing;
- (int)postCount;
- (void)setStatus:;
- (int)playCount;
- (long long)status;
- (void)setPostCount:;
- (void)setPlayCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
