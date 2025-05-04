@interface AWESearchAIGCInputCreatePanelRequirementCell : AWESearchAIGCInputCreatePanelBaseCell
@property (nonatomic) AWESearchAIGCInputCreatePanelRequirementCellViewModel viewModel;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) <AWESearchAIGCInputCreatePanelRequirementCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)collectionView;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)viewModel;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDelegate:;
- (void)setupUI;
- (void)updateWithModel:;
+ (double)viewHeightWithViewModel:;
@end
