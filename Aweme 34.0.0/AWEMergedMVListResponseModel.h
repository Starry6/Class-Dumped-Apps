@interface AWEMergedMVListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray mvTemplates;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSNumber longCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber sortedPosition;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (id)mvTemplates;
- (void)setLongCursor:;
- (id)sortedPosition;
- (void)setSortedPosition:;
- (id)longCursor;
- (void)setMvTemplates:;
- (id)cursor;
- (void)setHasMore:;
- (id)extra;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)mvTemplatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
