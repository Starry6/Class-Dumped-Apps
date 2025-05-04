@interface AWEProfileMenuHorizontalSectionController : AWEBaseListSectionController
@property (nonatomic) BOOL showEditAlias;
@property (nonatomic) @? dismissBlock;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (id)sizeForFooterWithCollectionViewSize:;
- (id)aAWEPadModuleAdapter;
- (id)aAWEPadBizUIAdapter;
- (void)setShowEditAlias:;
- (BOOL)showEditAlias;
- (id)sectionBackgroundColor;
- (Class)cellClass;
- (void).cxx_destruct;
- (id)dismissBlock;
- (void)setDismissBlock:;
- (Class)footerViewClass;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadBizUIAdapterClass;
@end
