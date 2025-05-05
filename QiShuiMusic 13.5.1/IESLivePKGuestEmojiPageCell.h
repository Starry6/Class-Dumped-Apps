@interface IESLivePKGuestEmojiPageCell : UICollectionViewCell
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray modelArray;
@property (nonatomic) <IESLivePKGuestEmojiPageCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cellWillDisplay;
- (void)configWithPageModel:;
- (id)modelArray;
- (void)setModelArray:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setDelegate:;
- (void)prepareForReuse;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (id)delegate;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setupUI;
+ (id)identifier;
@end
