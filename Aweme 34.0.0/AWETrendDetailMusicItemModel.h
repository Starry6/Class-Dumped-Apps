@interface AWETrendDetailMusicItemModel : NSObject
@property (nonatomic) AWEMusicModel musicModel;
@property (nonatomic) AWEUnifiedMusicGroupModel unifiedMusicGroupModel;
@property (nonatomic) Q musicInfoType;
@property (nonatomic) BOOL musicBanClick;
- (id)musicModel;
- (void)setMusicModel:;
- (BOOL)musicBanClick;
- (void)setMusicBanClick:;
- (unsigned long long)musicInfoType;
- (id)unifiedMusicGroupModel;
- (void)setMusicInfoType:;
- (void)setUnifiedMusicGroupModel:;
- (void).cxx_destruct;
@end
