@interface AWETeenAlbumPanelContainer : AWETeenBasePanelContainer
@property (nonatomic) AWETeenAlbumPanelCollectionView collectionView;
@property (nonatomic) AWETeenAlbumDataController dataController;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel episodeLabel;
@property (nonatomic) AWETeenAlbumPanelNoDataView noDataView;
@property (nonatomic) AWETeenAlbumPanelCollectView albumCollectView;
@property (nonatomic) DUXTeenPopover popover;
- (void)setDataController:;
- (id)initWithDataController:;
- (void)p_setupView;
- (id)episodeLabel;
- (void)setEpisodeLabel:;
- (void)p_addCollectionView;
- (void)presentWithPlayingIndex:;
- (void)showAlbumCollectSuccessPopover;
- (id)albumCollectView;
- (void)p_addHeader;
- (void)setAlbumCollectView:;
- (id)collectionView;
- (void)setCollectionView:;
- (id)popover;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)didDismiss;
- (id)titleLabel;
- (void)setPopover:;
- (id)dataController;
- (id)noDataView;
- (void)setNoDataView:;
@end
