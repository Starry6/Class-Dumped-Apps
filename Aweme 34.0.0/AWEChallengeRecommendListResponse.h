@interface AWEChallengeRecommendListResponse : AWEBaseApiModel
@property (nonatomic) NSArray challengs;
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) BOOL hasMore;
- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (id)challengs;
- (void)setChallengs:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)challengsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
