@interface IESLiveSaaSStickerTagTitleListCell : UICollectionViewCell
@property (nonatomic) UICollectionView textCollectionView;
@property (nonatomic) IESLiveSaaSStickerViewModel viewModel;
@property (nonatomic) NSNumber clickBtnItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)clickBtnItem;
- (void)configWithViewModel:;
- (void)setTextCollectionView:;
- (id)textCollectionView;
- (id)viewModel;
- (void)layoutSubviews;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (long long)numberOfSectionsInCollectionView:;
- (void)setViewModel:;
+ (id)identifier;
@end
