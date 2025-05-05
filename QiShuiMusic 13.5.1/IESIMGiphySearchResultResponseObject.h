@interface IESIMGiphySearchResultResponseObject : MTLModel
@property (nonatomic) q type;
@property (nonatomic) NSArray data;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q offset;
@property (nonatomic) q total;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)data;
- (void)setType:;
- (long long)offset;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (void)setData:;
- (long long)total;
+ (id)dataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
