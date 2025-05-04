@interface AWEShareSchemaLiveModel : AWEBaseApiModel
@property (nonatomic) q status;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSNumber anchorID;
@property (nonatomic) NSString title;
@property (nonatomic) q userCount;
@property (nonatomic) AWEShareSchemaLiveCoverModel cover;
@property (nonatomic) AWEShareSchemaEpisodeExtraModel episodeExtra;
- (id)cover;
- (void)setCover:;
- (id)episodeExtra;
- (void)setEpisodeExtra:;
- (id)anchorID;
- (void)setAnchorID:;
- (id)roomID;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
- (id)title;
- (void)setRoomID:;
- (void)setTitle:;
- (void)setUserCount:;
- (long long)userCount;
+ (id)coverJSONTransformer;
+ (id)episodeExtraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
