@interface AWEMusicDspMusicItemModel : NSObject
@property (nonatomic) NSString musicId;
@property (nonatomic) NSString itemId;
@property (nonatomic) NSString songId;
@property (nonatomic) LunaMedia lunaMedia;
- (void)setMusicId:;
- (id)musicId;
- (id)lunaMedia;
- (void)setLunaMedia:;
- (void)setSongId:;
- (id)initWithMusicId:videoId:;
- (id)initWithMusicId:videoId:songId:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)itemId;
- (id)songId;
- (void)setItemId:;
@end
