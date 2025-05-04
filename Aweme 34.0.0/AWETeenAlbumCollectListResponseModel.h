@interface AWETeenAlbumCollectListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray albums;
@property (nonatomic) Q cursor;
@property (nonatomic) Q count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString pageToken;
- (id)pageToken;
- (void)setPageToken:;
- (unsigned long long)cursor;
- (id)albums;
- (void)setCount:;
- (void)setHasMore:;
- (unsigned long long)count;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setAlbums:;
+ (id)albumsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
