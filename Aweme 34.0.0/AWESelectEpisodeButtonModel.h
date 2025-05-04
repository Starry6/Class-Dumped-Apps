@interface AWESelectEpisodeButtonModel : MTLModel
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString titlePrefix;
@property (nonatomic) q type;
@property (nonatomic) NSString albumID;
@property (nonatomic) NSString episodeID;
@property (nonatomic) NSString extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (void)setAwemeID:;
- (id)awemeID;
- (void)setAlbumID:;
- (void)setEpisodeID:;
- (id)extra;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)albumID;
- (void)setTitlePrefix:;
- (id)titlePrefix;
- (id)episodeID;
+ (id)JSONKeyPathsByPropertyKey;
@end
