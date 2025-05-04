@interface AWEChallengeAwemeListResponse : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSArray mixList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
- (id)awemeList;
- (void)setMixList:;
- (void)setAwemeList:;
- (id)mixList;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)mixListJSONTransformer;
@end
