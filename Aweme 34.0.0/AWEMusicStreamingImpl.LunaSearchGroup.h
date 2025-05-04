@interface AWEMusicStreamingImpl.LunaSearchGroup : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSString id;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString nextCursor;
@property (nonatomic) NSArray items;
- (id)nextCursor;
- (void)setNextCursor:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)items;
- (void)setItems:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (id)id;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setId:;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
