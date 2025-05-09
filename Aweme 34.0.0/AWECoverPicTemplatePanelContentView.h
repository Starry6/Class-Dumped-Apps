@interface AWECoverPicTemplatePanelContentView : UIView
@property (nonatomic) UICollectionView picTemplateCollectionView;
@property (nonatomic) UICollectionViewFlowLayout flowLayout;
@property (nonatomic) ACCPicTemplatePanelDataManager dataManager;
@property (nonatomic) NSMutableDictionary offSetCacheMap;
@property (nonatomic) NSIndexPath selectedIndexPath;
@property (nonatomic) <AWECoverPicTemplatePanelContentViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDataManager:;
- (void)scrollToIndexPath:animated:;
- (void)didUnselectWithIndexPath:;
- (void)didSelectWithIndexPath:;
- (void)didSelectTemplateModel:atIndexPath:contentCell:;
- (void)willDisplayTemplateModel:atIndexPath:contentCell:;
- (void)contentCellDidScroll:;
- (id)picTemplateCollectionView;
- (id)offSetCacheMap;
- (void)updateCategoryToSelect:;
- (void)reloadDataWithIndexSet:;
- (void)setPicTemplateCollectionView:;
- (void)setOffSetCacheMap:;
- (void)reloadData;
- (BOOL)isValidIndexPath:;
- (id)dataManager;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setDataManager:;
- (void)scrollViewDidScroll:;
- (void)scrollViewDidEndDecelerating:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void)scrollViewDidEndScrollingAnimation:;
- (void)setDelegate:;
- (id)flowLayout;
- (id)selectedIndexPath;
- (void)setFlowLayout:;
- (void)setSelectedIndexPath:;
- (void)setupUI;
@end
