@interface AWEDetailTrendMusicListConfigurationImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)containerEdgeInsets;
- (id)containerViewSize;
- (id)cellSizeForSingleCellStyle;
- (id)cellSizeForMultiCellsStyle;
- (id)collectionViewSectionEdgeInsets;
- (double)spacingBetweenTwoCells;
- (double)cellPreviewPartWidth;
- (void)configureContainerView:contentCollectionView:;
- (void)configureLayoutForCollectionViewCell:musicItemViewModel:;
- (void)p_configureSkeletonViewWithCollectionViewCell:musicItemViewModel:;
- (void)p_configureCoverWithCollectionViewCell:musicItemViewModel:;
- (void)p_configureMusicInfoAreaWithCollectionViewCell:musicItemViewModel:;
- (void)p_configureLunaButtonWithCollectionViewCell:musicItemViewModel:;
- (void)p_configureCollectMusicButtonWithCollectionViewCell:musicItemViewModel:;
@end
