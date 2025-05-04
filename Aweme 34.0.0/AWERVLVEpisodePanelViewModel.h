@interface AWERVLVEpisodePanelViewModel : AWERVLVBasePanelViewModel
@property (nonatomic) AWERVLVEpisodesView episodesView;
@property (nonatomic) AWELVideoAlbumInfoModel albumInfoModel;
@property (nonatomic) NSArray episodeList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)episodeList;
- (void)setEpisodeList:;
- (id)episodesView;
- (void)refreshModel:;
- (void)setAlbumInfoModel:;
- (id)albumInfoModel;
- (void)trackLongVideoShowWithEpisodeIndex:;
- (id)panelContentView;
- (double)pushPanelTopPadding;
- (void)setEpisodesView:;
- (id)contentScrollView;
- (void).cxx_destruct;
@end
