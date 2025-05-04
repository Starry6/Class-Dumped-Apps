@interface AWESharePanelUpdateModel : NSObject
@property (nonatomic) <AWESharePanelListItem> listItem;
@property (nonatomic) q sectionIndex;
@property (nonatomic) NSArray deleteItemsAtIndexPaths;
@property (nonatomic) NSArray reloadItemsAtIndexPaths;
@property (nonatomic) NSArray insertItemsAtIndexPaths;
- (id)deleteItemsAtIndexPaths;
- (id)reloadItemsAtIndexPaths;
- (id)insertItemsAtIndexPaths;
- (id)initWithSectionIndex:listItem:deleteItemsAtIndexPaths:reloadItemsAtIndexPaths:insertItemsAtIndexPaths:;
- (void)setDeleteItemsAtIndexPaths:;
- (void)setReloadItemsAtIndexPaths:;
- (void)setInsertItemsAtIndexPaths:;
- (void).cxx_destruct;
- (id)listItem;
- (void)setListItem:;
- (long long)sectionIndex;
- (void)setSectionIndex:;
@end
