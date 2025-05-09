@interface AWENewVideoImageTemplateListView : AWEImageTemplateListView
@property (nonatomic) UIView authorInfoView;
@property (nonatomic) UICollectionView templateCollectionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)authorInfoView;
- (void)selectTemplateCollectionCellInIndexPath:unselectInIndexPath:;
- (BOOL)shouldShowTopIndicator;
- (double)templateImageCollectionViewHeight;
- (BOOL)isTemplateInfoInTemplateList;
- (void)templateApplyTemplateSuccessForIndexPath:;
- (void)templateImageCollectionView:didSelectItemAtIndexPath:;
- (long long)templateImageCollectionView:numberOfItemsInSection:;
- (id)templateImageCollectionView:cellForItemAtIndexPath:;
- (id)templateImageCollectionView:layout:referenceSizeForHeaderInSection:;
- (id)templateImageCollectionView:layout:sizeForItemAtIndexPath:;
- (id)visibleTemplateCellIndexPaths;
- (BOOL)isTemplateInMultiParts;
- (void)scrollToShowTemplate:;
- (Class)templateTabItemClass;
- (id)clearStickerImage;
- (id)templateImageCollectionView;
- (void)cellShowComplianceNotificationAndAuthorInfoAndClearBtnStatusWith:;
- (void)cell:didSelectForIndexPath:model:;
- (void)setTemplateCollectionView:;
- (id)templateCollectionView;
- (void)setAuthorInfoView:;
- (void).cxx_destruct;
@end
