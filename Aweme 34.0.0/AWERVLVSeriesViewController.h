@interface AWERVLVSeriesViewController : AWERVMetaPanelViewController
@property (nonatomic) AWERVLVSeriesView seriesView;
@property (nonatomic) NSArray albumModelList;
@property (nonatomic) <AWERVLVSelectDelegate> delegate;
@property (nonatomic) @? seriesCloseBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAlbumModelList:;
- (id)albumModelList;
- (void)selectAlbum:;
- (void)setSeriesCloseBlock:;
- (void)refreshModel:currentSelectIndex:;
- (id)panelContentView;
- (id)seriesView;
- (void)setSeriesView:;
- (id)seriesCloseBlock;
- (id)delegate;
- (id)contentScrollView;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)closeButtonTapped;
@end
