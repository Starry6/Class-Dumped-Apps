@interface AWEAwemeAdDislikePanelViewCell : UICollectionViewCell
@property (nonatomic) UIView dislikeBackgroundView;
@property (nonatomic) UICollectionView dislikeCollectionView;
@property (nonatomic) UIButton submitButton;
@property (nonatomic) NSMutableArray selectedItems;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) NSArray noWantLookArray;
@property (nonatomic) NSArray feedbackArray;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweme;
- (void)setAweme:;
- (void)configWithModel:;
- (id)dislikeCollectionView;
- (id)feedbackArray;
- (id)noWantLookArray;
- (void)updateSubmitButtonTitle;
- (id)dislikeBackgroundView;
- (id)itemModelAtIndexPath:;
- (id)handleSelectedItems;
- (void)submitButtonClicked;
- (void)setDislikeBackgroundView:;
- (void)setDislikeCollectionView:;
- (void)setNoWantLookArray:;
- (void)setFeedbackArray:;
- (id)collectionView:layout:referenceSizeForFooterInSection:;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (void)collectionView:didDeselectItemAtIndexPath:;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)initWithFrame:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)selectedItems;
- (void)setSelectedItems:;
- (void)setSubmitButton:;
- (id)submitButton;
- (id)dismissBlock;
- (void)setDismissBlock:;
- (void)createUI;
@end
