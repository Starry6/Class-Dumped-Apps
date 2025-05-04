@interface AWESearchUserPostDataResponse : AWEBaseApiModel
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray awemes;
@property (nonatomic) NSNumber total;
@property (nonatomic) BOOL hasLocateItem;
- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (id)awemes;
- (void)setAwemes:;
- (BOOL)hasLocateItem;
- (void)setHasLocateItem:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)total;
- (void)setTotal:;
+ (id)awemesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
