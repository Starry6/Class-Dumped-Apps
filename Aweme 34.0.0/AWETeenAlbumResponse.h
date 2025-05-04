@interface AWETeenAlbumResponse : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) Q count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) NSString pageToken;
@property (nonatomic) BOOL hasPrevious;
- (BOOL)isCollected;
- (void)setIsCollected:;
- (id)awemeList;
- (id)minCursor;
- (void)setAwemeList:;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (void)setHasPrevious:;
- (id)pageToken;
- (void)setPageToken:;
- (void)setCount:;
- (void)setHasMore:;
- (unsigned long long)count;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (BOOL)hasPrevious;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
