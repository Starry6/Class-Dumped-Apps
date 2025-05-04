@interface AWERVLVImageEpisodesElement : AWERVVideoInfoBaseElement
@property (nonatomic) AWERVLVImageEpisodesView imageEpisodesView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)getCurrentEpisodeIndex;
- (void)showAllPanelWithModel:episodeList:currentSelectIndex:;
- (void)trackLongVideoShowWithEpisodeIndex:;
- (BOOL)isSupportMultiEpisode;
- (BOOL)isSupportAppointmentEpisode;
- (id)imageEpisodesView;
- (void)setImageEpisodesView:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
@end
