@interface IESIMChallengeRecommendListResponse : IESIMBaseApiModel
@property (nonatomic) NSArray challengs;
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) BOOL hasMore;
- (id)challengs;
- (id)maxCursor;
- (id)minCursor;
- (void)setChallengs:;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (void)setHasMore:;
- (void).cxx_destruct;
- (BOOL)hasMore;
+ (id)challengsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
