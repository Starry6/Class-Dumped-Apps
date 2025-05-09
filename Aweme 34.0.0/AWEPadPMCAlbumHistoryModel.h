@interface AWEPadPMCAlbumHistoryModel : MTLModel
@property (nonatomic) NSString showPackRespJson;
@property (nonatomic) q progress;
@property (nonatomic) NSString coverUrl;
@property (nonatomic) NSNumber playTime;
@property (nonatomic) NSString albumID;
@property (nonatomic) NSString schemeURL;
@property (nonatomic) NSString title;
@property (nonatomic) NSString episodeItemID;
@property (nonatomic) NSString albumItemID;
@property (nonatomic) q label;
@property (nonatomic) AWEPadPMCAlbumCardModel albumModel;
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
- (id)albumItemID;
- (void)setAlbumItemID:;
- (id)albumModel;
- (void)setAlbumModel:;
- (id)episodeItemID;
- (void)setEpisodeItemID:;
- (id)showPackRespJson;
- (void)setShowPackRespJson:;
- (void)setLabel:;
- (id)playTime;
- (long long)progress;
- (long long)label;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setProgress:;
- (id)albumID;
+ (id)JSONKeyPathsByPropertyKey;
@end
