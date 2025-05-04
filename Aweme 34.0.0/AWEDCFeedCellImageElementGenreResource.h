@interface AWEDCFeedCellImageElementGenreResource : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEDCFeedPageContext context;
@property (nonatomic) q genreType;
@property (nonatomic) AWEDCFeedCellImageElementGenreResourceIconView albumView;
@property (nonatomic) AWEDCFeedCellImageElementGenreResourceIconView videoView;
@property (nonatomic) AWEDCFeedCellImageElementGenreResourceLiveView liveView;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setAlbumView:;
- (id)classNameWithReferString;
- (void)updateWithAwemeModel:context:;
- (void)setGenreType:;
- (long long)genreType;
- (id)initWithAwemeModel:context:;
- (id)videoView;
- (void)setVideoView:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)liveView;
- (void)setLiveView:;
- (id)currentView;
- (id)albumView;
@end
