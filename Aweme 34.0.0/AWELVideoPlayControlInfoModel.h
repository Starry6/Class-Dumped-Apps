@interface AWELVideoPlayControlInfoModel : MTLModel
@property (nonatomic) NSString awemeId;
@property (nonatomic) NSString albumId;
@property (nonatomic) NSString episodeId;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) NSNumber speed;
@property (nonatomic) NSNumber position;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAwemeId:;
- (id)awemeId;
- (id)albumId;
- (void)setAlbumId:;
- (void)setSpeed:;
- (id)speed;
- (void)setIsPaused:;
- (id)position;
- (BOOL)isPaused;
- (void).cxx_destruct;
- (void)setPosition:;
- (id)episodeId;
- (void)setEpisodeId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
