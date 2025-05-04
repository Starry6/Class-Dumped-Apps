@interface AWEPlaylistDetailResponseModel : AWEBaseApiModel
@property (nonatomic) AWEPlaylistInfoModel playlistInfo;
@property (nonatomic) NSArray mediaList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString playlistExtra;
- (id)playlistInfo;
- (void)setPlaylistInfo:;
- (id)mediaList;
- (void)setMediaList:;
- (id)playlistExtra;
- (void)setPlaylistExtra:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)playlistInfoJSONTransformer;
+ (id)mediaListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
