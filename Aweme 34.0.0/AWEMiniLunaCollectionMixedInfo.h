@interface AWEMiniLunaCollectionMixedInfo : AWEBaseApiModel
@property (nonatomic) NSString itemType;
@property (nonatomic) AWEMiniLunaPlaylistInfoModel playlist;
- (id)itemType;
- (void)setItemType:;
- (void).cxx_destruct;
- (id)playlist;
- (void)setPlaylist:;
+ (id)playlistJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
