@interface AWEPlaylistCreateResponse : AWEBaseApiModel
@property (nonatomic) NSString playlistId;
@property (nonatomic) AWEPlaylistInfoModel playlistInfo;
@property (nonatomic) AWEPlaylistStatusModel statusInfo;
- (id)playlistInfo;
- (void)setPlaylistInfo:;
- (id)statusInfo;
- (void)setStatusInfo:;
- (id)playlistId;
- (void)setPlaylistId:;
- (void).cxx_destruct;
+ (id)statusInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
