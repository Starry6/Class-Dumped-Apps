@interface AWEVideoCoverRecommendTextView : UIView
@property (nonatomic) NSArray models;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) BOOL singleLine;
@property (nonatomic) <AWEVideoCoverRecommendTextViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupSubViews;
- (id)initWithFrame:textModels:singleLine:;
- (void)refreshTitleModels:;
- (id)collectionView;
- (BOOL)collectionView:shouldSelectItemAtIndexPath:;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setModels:;
- (id)collectionViewLayout;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDelegate:;
- (id)models;
- (void)setSingleLine:;
- (BOOL)singleLine;
@end
