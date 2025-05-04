@interface AWEMiniLunaGetPlaylistsResponse : AWEBaseApiModel
@property (nonatomic) NSArray playlists;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString cursor;
@property (nonatomic) NSNumber totalNumber;
- (void)setPlaylists:;
- (void)setTotalNumber:;
- (id)totalNumber;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)playlists;
+ (id)playlistsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
