@interface AWEAwemeListCommonResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber offset;
@property (nonatomic) NSNumber maxCursor;
- (id)awemeList;
- (void)setAwemeList:;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setOffset:;
- (id)offset;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
