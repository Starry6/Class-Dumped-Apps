@interface AWECoverEditorTextSwitchCollectionViewTitleCell : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray titleModelArr;
@property (nonatomic) AWECoverEditorTextReloadView reloadView;
@property (nonatomic) <AWECoverEditorTextSwitchCollectionViewTitleCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setReloadView:;
- (void)setTitleModelArr:;
- (id)initWithTitleArray:;
- (void)clearSelectedTitle;
- (void)reloadDataForReloadButton;
- (id)titleModelArr;
- (id)collectionView;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)hitTest:withEvent:;
- (void)setDelegate:;
- (void)setupUI;
- (id)reloadView;
@end
