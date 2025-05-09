@interface AWERVLVImageEpisodesViewController : AWERVMetaPanelViewController
@property (nonatomic) AWERVLVImageEpisodesView episodesView;
@property (nonatomic) AWELVideoAlbumInfoModel albumInfoModel;
@property (nonatomic) NSArray episodeList;
@property (nonatomic) <AWERVLVSelectDelegate> delegate;
@property (nonatomic) @? imageEpisodesCloseBlock;
@property (nonatomic) BOOL shouldSimplifyTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)episodeList;
- (void)setEpisodeList:;
- (id)episodesView;
- (void)setImageEpisodesCloseBlock:;
- (void)refreshModel:episodeList:currentSelectIndex:;
- (void)refreshModel:title:subTitle:episodeList:currentSelectIndex:;
- (void)setShouldSimplifyTitle:;
- (void)setAlbumInfoModel:;
- (id)albumInfoModel;
- (void)trackLongVideoShowWithEpisodeIndex:;
- (id)panelContentView;
- (BOOL)shouldSimplifyTitle;
- (id)imageEpisodesCloseBlock;
- (void)setEpisodesView:;
- (id)delegate;
- (id)contentScrollView;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)closeButtonTapped;
@end
