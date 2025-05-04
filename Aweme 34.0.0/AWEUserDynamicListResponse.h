@interface AWEUserDynamicListResponse : AWEBaseApiModel
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray dynamicList;
- (id)minCursor;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (id)dynamicList;
- (void)setDynamicList:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)hasMoreJSONTransformer;
+ (id)dynamicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
