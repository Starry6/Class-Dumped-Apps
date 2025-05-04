@interface AWECommentGeneralMusicModel : AWEBaseApiModel
@property (nonatomic) Q modelType;
@property (nonatomic) AWEAwemeModel feedAwemeModel;
@property (nonatomic) AWEMusicFeedViewModel feedMusicModel;
@property (nonatomic) NSString songId;
@property (nonatomic) @? miniPlayTrackParamsBlock;
- (void)setFeedAwemeModel:;
- (void)setSongId:;
- (id)feedAwemeModel;
- (id)feedMusicModel;
- (void)setFeedMusicModel:;
- (id)miniPlayTrackParamsBlock;
- (void)setMiniPlayTrackParamsBlock:;
- (unsigned long long)modelType;
- (void)setModelType:;
- (void).cxx_destruct;
- (id)songId;
@end
