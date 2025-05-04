@interface AWEFavoriteChallengeListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray challengeList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
- (id)challengeList;
- (void)setChallengeList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)challengeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
