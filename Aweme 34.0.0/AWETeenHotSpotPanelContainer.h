@interface AWETeenHotSpotPanelContainer : AWETeenBasePanelContainer
@property (nonatomic) AWETeenHotSpotCollectionView collectionView;
@property (nonatomic) BOOL firsrPresent;
- (void)p_setupView;
- (void)setFirsrPresent:;
- (BOOL)firsrPresent;
- (void)presentWithHotID:;
- (id)collectionView;
- (id)init;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (void)didDismiss;
- (void)didPresent;
@end
