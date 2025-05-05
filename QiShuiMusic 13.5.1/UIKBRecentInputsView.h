@interface UIKBRecentInputsView : UIKBKeyView
@property (nonatomic) UICollectionViewFlowLayout flowLayout;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray recentInputStrings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setRecentInputs:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)displayLayer:;
- (void)setVerticalLayout:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (id)collectionView;
- (void)scrollViewDidChangeContentSize:;
- (id)initWithFrame:keyplane:key:;
- (unsigned long long)focusableVariantCount;
- (void)refreshSelectedRecent;
- (id)selectedRecentInputString;
- (void)setupCollectionView;
- (id)recentInputStrings;
- (void)setRecentInputStrings:;
- (id)flowLayout;
- (void)setFlowLayout:;
@end
