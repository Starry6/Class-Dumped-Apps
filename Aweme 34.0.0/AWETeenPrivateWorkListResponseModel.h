@interface AWETeenPrivateWorkListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) Q cursor;
@property (nonatomic) Q count;
@property (nonatomic) BOOL hasMore;
- (id)awemeList;
- (void)setAwemeList:;
- (unsigned long long)cursor;
- (void)setCount:;
- (void)setHasMore:;
- (unsigned long long)count;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
