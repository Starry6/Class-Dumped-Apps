@interface AWEPlaylistMixedList : AWEBaseApiModel
@property (nonatomic) NSString itemType;
@property (nonatomic) Q type;
@property (nonatomic) AWEPlaylistInfoModel playlistInfo;
- (id)playlistInfo;
- (void)setPlaylistInfo:;
- (id)itemType;
- (void)setItemType:;
- (unsigned long long)type;
- (void).cxx_destruct;
+ (id)playlistInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
