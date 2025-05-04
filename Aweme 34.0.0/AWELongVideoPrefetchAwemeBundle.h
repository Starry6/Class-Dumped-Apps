@interface AWELongVideoPrefetchAwemeBundle : NSObject
@property (nonatomic) <AWEHttpTask> requestAwemeModelTask;
@property (nonatomic) AWEAwemeResponseModel responseModel;
@property (nonatomic) NSError responseError;
@property (nonatomic) @? completionBlock;
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSString albumID;
@property (nonatomic) NSString episodeID;
@property (nonatomic) NSString highlightEpisodeId;
- (void)setAwemeID:;
- (id)awemeID;
- (void)setAlbumID:;
- (void)setEpisodeID:;
- (id)highlightEpisodeId;
- (void)setHighlightEpisodeId:;
- (id)requestAwemeModelTask;
- (BOOL)shouldReuseForAwemeID:albumID:episodeID:highlightEpisodeID:;
- (void)setRequestAwemeModelTask:;
- (BOOL)isString:sameWith:;
- (id)responseError;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (void).cxx_destruct;
- (void)setResponseError:;
- (id)albumID;
- (id)responseModel;
- (void)setResponseModel:;
- (id)episodeID;
@end
