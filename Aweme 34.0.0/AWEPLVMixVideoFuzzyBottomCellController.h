@interface AWEPLVMixVideoFuzzyBottomCellController : AWEPadPolymericChannelVideoBaseCellController
@property (nonatomic) AWEPLVAwemeViewModel viewModel;
- (id)diffIdentifier;
- (long long)columnNumWithCollectionView:;
- (id)pageKey;
- (void)viewDidDisplay;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (id)viewSizeWithIndex:collectionView:;
- (Class)viewClass;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
@end
