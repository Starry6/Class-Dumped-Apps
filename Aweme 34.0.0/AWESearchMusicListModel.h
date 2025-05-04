@interface AWESearchMusicListModel : AWEBaseApiModel
@property (nonatomic) NSArray mediaList;
@property (nonatomic) NSArray searchBackgroundConfig;
@property (nonatomic) AWESearchMusicPlayListInfoModel playListInfo;
@property (nonatomic) AWESearchMusicPlayListSearchInfoModel playListSearchInfo;
@property (nonatomic) NSArray musicList;
- (id)mediaList;
- (void)setMediaList:;
- (id)musicList;
- (void)setMusicList:;
- (id)searchBackgroundConfig;
- (void)setSearchBackgroundConfig:;
- (void)setPlayListInfo:;
- (void)setPlayListSearchInfo:;
- (id)playListInfo;
- (id)playListSearchInfo;
- (void).cxx_destruct;
+ (id)mediaListJSONTransformer;
+ (id)playListInfoJSONTransformer;
+ (id)playListSearchInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
