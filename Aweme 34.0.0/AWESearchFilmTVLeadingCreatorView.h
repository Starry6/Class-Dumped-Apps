@interface AWESearchFilmTVLeadingCreatorView : UIView
@property (nonatomic) AWEGeneralFilmTVLeadingCreatorModel model;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) NSArray leadingCreators;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) <AWESearchFilmTVLeadingCreatorViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLeadingCreators:;
- (id)leadingCreators;
- (void)setModel:;
- (id)collectionView;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (id)model;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)titleLabel;
- (void)setDelegate:;
- (void)updateModel:;
+ (double)getHeight;
@end
