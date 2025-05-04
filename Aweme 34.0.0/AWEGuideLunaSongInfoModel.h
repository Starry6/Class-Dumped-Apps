@interface AWEGuideLunaSongInfoModel : AWEBaseApiModel
@property (nonatomic) NSArray songs;
@property (nonatomic) AWEGuideLunaPopViewRequestSongInfo songInfo;
@property (nonatomic) AWEGuideLunaPopViewRequestLyricInfo lyricInfo;
@property (nonatomic) Q songStrategy;
@property (nonatomic) NSArray comments;
@property (nonatomic) AWEGuideLunaPopViewRelationInfo userRelation;
- (void)setSongStrategy:;
- (unsigned long long)songStrategy;
- (id)songInfo;
- (void)setSongInfo:;
- (id)lyricInfo;
- (void)setLyricInfo:;
- (id)userRelation;
- (void)setUserRelation:;
- (void).cxx_destruct;
- (id)comments;
- (void)setComments:;
- (void)setSongs:;
- (id)songs;
+ (id)songsJSONTransformer;
+ (id)commentsJSONTransformer;
+ (id)songInfoJSONTransformer;
+ (id)lyricInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
