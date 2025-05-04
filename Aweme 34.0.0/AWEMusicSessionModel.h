@interface AWEMusicSessionModel : NSObject
@property (nonatomic) NSString version;
@property (nonatomic) NSMutableDictionary musicDetailDic;
@property (nonatomic) NSMutableDictionary itemIDMusicIdDic;
@property (nonatomic) NSMutableDictionary videoOrderDict;
@property (nonatomic) BOOL isFromHotMusicList;
- (id)musicDetailDic;
- (void)setMusicDetailDic:;
- (id)itemIDMusicIdDic;
- (void)setItemIDMusicIdDic:;
- (id)videoOrderDict;
- (void)setVideoOrderDict:;
- (BOOL)isFromHotMusicList;
- (void)setIsFromHotMusicList:;
- (id)version;
- (void)setVersion:;
- (void).cxx_destruct;
@end
