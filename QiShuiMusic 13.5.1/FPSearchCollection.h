@interface FPSearchCollection : FPQueryCollection
@property (nonatomic) NSFileProviderSearchQuery searchQuery;
- (id)init;
- (void).cxx_destruct;
- (id)searchQuery;
- (void)setSearchQuery:;
- (BOOL)isCollectionValidForItem:;
- (id)createDataSourceWithSortDescriptors:;
- (id)scopedSearchQuery;
- (id)_createDescriptorWithSortDescriptors:;
- (id)_enumerationSettingsPredicate;
@end
