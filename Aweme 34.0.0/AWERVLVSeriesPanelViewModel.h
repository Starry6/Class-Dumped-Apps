@interface AWERVLVSeriesPanelViewModel : AWERVLVBasePanelViewModel
@property (nonatomic) AWERVLVSeriesView seriesView;
@property (nonatomic) NSArray albumModelList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)refreshModel:;
- (void)setAlbumModelList:;
- (id)albumModelList;
- (void)selectAlbum:;
- (id)panelContentView;
- (double)pushPanelTopPadding;
- (id)seriesView;
- (void)setSeriesView:;
- (id)contentScrollView;
- (void).cxx_destruct;
- (void)containerDidLayoutSubviews;
@end
