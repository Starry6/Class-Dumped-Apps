@interface AWETheaterHotLiveSectionCell : UICollectionViewCell
@property (nonatomic) AWETheaterPageContext context;
@property (nonatomic) AWETheaterTracker tracker;
@property (nonatomic) AWETheaterSectionModel sectionModel;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initSubViews;
- (void)handleCardClickTrack:;
- (void)configWithSectionModel:context:tracker:;
- (id)sectionModel;
- (id)collectionView;
- (id)tracker;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)initWithFrame:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (void)setTracker:;
- (void)setContext:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setSectionModel:;
- (id)context;
@end
