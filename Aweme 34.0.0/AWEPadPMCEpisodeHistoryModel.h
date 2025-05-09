@interface AWEPadPMCEpisodeHistoryModel : MTLModel
@property (nonatomic) NSString showPackRespJson;
@property (nonatomic) q progress;
@property (nonatomic) NSString coverUrl;
@property (nonatomic) NSNumber playTime;
@property (nonatomic) NSString albumID;
@property (nonatomic) NSString schemeURL;
@property (nonatomic) NSString title;
@property (nonatomic) NSString episodeItemID;
@property (nonatomic) AWEPadPMCEpisodeCardModel episodeModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCoverUrl:;
- (id)coverUrl;
- (void)setAlbumID:;
- (void)setPlayTime:;
- (id)schemeURL;
- (void)setSchemeURL:;
- (void)setEpisodeModel:;
- (id)episodeModel;
- (id)episodeItemID;
- (void)setEpisodeItemID:;
- (id)showPackRespJson;
- (void)setShowPackRespJson:;
- (id)playTime;
- (long long)progress;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setProgress:;
- (id)albumID;
+ (id)JSONKeyPathsByPropertyKey;
@end
