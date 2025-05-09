@interface IESECWinBubbleCell : UICollectionViewCell
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UICollectionViewFlowLayout layout;
@property (nonatomic) IESECWinBubbleObject object;
@property (nonatomic) @? clickItemWithIndex;
@property (nonatomic) @? showItemWithIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bubbleCellWithIndex:;
- (id)clickItemWithIndex;
- (void)setClickItemWithIndex:;
- (void)setShowItemWithIndex:;
- (id)showItemWithIndex;
- (void)updateWithObject:;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setObject:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setLayout:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithFrame:;
- (id)layout;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (id)object;
- (long long)numberOfSectionsInCollectionView:;
- (id)collectionView;
- (void)setupUI;
+ (double)bubbleCardHeight:;
+ (unsigned long long)bubbleCardTypeWithCount:;
+ (double)bubbleCardWidth:;
@end
