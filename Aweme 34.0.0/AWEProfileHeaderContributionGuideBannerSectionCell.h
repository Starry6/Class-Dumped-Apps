@interface AWEProfileHeaderContributionGuideBannerSectionCell : UICollectionViewCell
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) AWEProfileContributionGuideCollectionViewCell cell;
@property (nonatomic) <AWEProfileHeaderContributionGuideBannerSectionCellDelegate> delegate;
- (void)hideCell;
- (void)configWithHeaderContext:;
- (void)clearCell;
- (void)prepareContributionCell;
- (id)actionForLayer:forKey:;
- (id)delegate;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)context;
- (id)cell;
- (void)setCell:;
@end
