@interface AWEHotSearchCommentDataSourceModel : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString requestPath;
@property (nonatomic) NSDictionary requestParams;
- (id)cursor;
- (void)setKey:;
- (void)setHasMore:;
- (id)key;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setRequestPath:;
- (id)requestPath;
- (id)requestParams;
- (void)setRequestParams:;
+ (id)modelCustomPropertyMapper;
@end
