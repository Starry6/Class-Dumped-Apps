@interface AWERVLVEpisodesElement : AWERVVideoInfoBaseElement
@property (nonatomic) AWERVLVEpisodesView episodesView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)episodesView;
- (long long)getCurrentEpisodeIndex;
- (void)showAllPanelWithModel:episodeList:currentSelectIndex:;
- (void)trackLongVideoShowWithEpisodeIndex:;
- (BOOL)isSupportMultiEpisode;
- (BOOL)isSupportAppointmentEpisode;
- (void)setEpisodesView:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
@end
