@interface AWENaviCategoryTabContentEmotionTableViewCell : TTKNaviCategoryTabContentTableViewCell
@property (nonatomic) UICollectionView emotionCollectionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (id)emotionCollectionView;
- (void)p_bindViewModel;
- (id)p_getEmotionCollectionViewCellWithEffect:;
- (void)setEmotionCollectionView:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)viewModel;
- (void)reload;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)layoutSubviews;
@end
