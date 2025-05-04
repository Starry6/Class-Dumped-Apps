@interface AWEMerchandiseInnerFeedLoadMoreResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber resultType;
@property (nonatomic) NSArray items;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (id)cursor;
- (id)items;
- (void)setResultType:;
- (void)setItems:;
- (void)setHasMore:;
- (id)extra;
- (BOOL)hasMore;
- (id)resultType;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
