@interface FPSearchTrashCollection : FPUnionCollection
@property (nonatomic) NSFileProviderSearchQuery searchQuery;
- (id)init;
- (void).cxx_destruct;
- (id)searchQuery;
- (void)setSearchQuery:;
- (BOOL)isCollectionValidForItem:;
- (id)scopedSearchQuery;
@end
