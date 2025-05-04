@interface AWEGiphySearchResultResponseObject : MTLModel
@property (nonatomic) q type;
@property (nonatomic) NSArray data;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q offset;
@property (nonatomic) q total;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)offset;
- (BOOL)hasMore;
- (long long)type;
- (void)setType:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (long long)total;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;
@end
