@interface AWERVLVImagePanelViewModel : AWERVLVBasePanelViewModel
@property (nonatomic) AWERVLVImageEpisodesView imageView;
@property (nonatomic) AWELVideoAlbumInfoModel albumInfoModel;
@property (nonatomic) NSArray episodeList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)episodeList;
- (void)setEpisodeList:;
- (void)refreshModel:;
- (void)setAlbumInfoModel:;
- (id)albumInfoModel;
- (void)trackLongVideoShowWithEpisodeIndex:;
- (id)panelContentView;
- (double)pushPanelTopPadding;
- (id)contentScrollView;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)containerDidLayoutSubviews;
@end
