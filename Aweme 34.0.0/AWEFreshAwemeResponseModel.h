@interface AWEFreshAwemeResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber minTime;
@property (nonatomic) NSNumber maxTime;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray awemeList;
- (id)awemeList;
- (void)setAwemeList:;
- (void)setMaxTime:;
- (void)setMinTime:;
- (id)maxTime;
- (void)setHasMore:;
- (id)minTime;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
