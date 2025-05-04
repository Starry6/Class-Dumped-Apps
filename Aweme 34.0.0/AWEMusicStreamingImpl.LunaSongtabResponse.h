@interface AWEMusicStreamingImpl.LunaSongtabResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) NSArray items;
@property (nonatomic) BOOL hasMore;
- (id)initWithDictionary:error:;
- (id)init;
- (id)items;
- (void)setItems:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
