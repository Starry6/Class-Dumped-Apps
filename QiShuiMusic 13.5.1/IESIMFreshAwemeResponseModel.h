@interface IESIMFreshAwemeResponseModel : IESIMBaseApiModel
@property (nonatomic) NSNumber minTime;
@property (nonatomic) NSNumber maxTime;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray awemeList;
- (id)awemeList;
- (void)setAwemeList:;
- (id)maxTime;
- (id)minTime;
- (void)setMinTime:;
- (void)setMaxTime:;
- (void)setHasMore:;
- (void).cxx_destruct;
- (BOOL)hasMore;
+ (id)awemeListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
