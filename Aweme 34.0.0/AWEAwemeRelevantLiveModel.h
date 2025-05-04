@interface AWEAwemeRelevantLiveModel : AWEBaseApiModel
@property (nonatomic) q videoRelevantCategory;
@property (nonatomic) NSString title;
@property (nonatomic) q linkmicKtvSongAuthorId;
@property (nonatomic) q linkmicKtvSongId;
@property (nonatomic) NSString linkmicKtvSongName;
@property (nonatomic) NSString extra;
- (void)setExtra:;
- (long long)videoRelevantCategory;
- (void)setVideoRelevantCategory:;
- (long long)linkmicKtvSongAuthorId;
- (void)setLinkmicKtvSongAuthorId:;
- (long long)linkmicKtvSongId;
- (void)setLinkmicKtvSongId:;
- (id)linkmicKtvSongName;
- (void)setLinkmicKtvSongName:;
- (id)extra;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
