@interface AWEPlaylistListResponse : AWEBaseApiModel
@property (nonatomic) NSArray playlistInfo;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q cursor;
@property (nonatomic) Q playlistType;
@property (nonatomic) NSNumber totalCount;
- (id)playlistInfo;
- (void)setPlaylistInfo:;
- (unsigned long long)playlistType;
- (long long)cursor;
- (id)totalCount;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void)setPlaylistType:;
- (void).cxx_destruct;
- (void)setTotalCount:;
+ (id)playlistInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
