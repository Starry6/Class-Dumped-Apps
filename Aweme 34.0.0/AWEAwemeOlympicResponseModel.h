@interface AWEAwemeOlympicResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber offset;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray awemeList;
- (id)awemeList;
- (void)setAwemeList:;
- (void)setOffset:;
- (id)offset;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
