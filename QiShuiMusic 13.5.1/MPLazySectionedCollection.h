@interface MPLazySectionedCollection : MPSectionedCollection
@property (nonatomic) <MPLazySectionedCollectionDataSource> dataSource;
- (void)enumerateSectionsUsingBlock:;
- (void)setDataSource:;
- (id)allItems;
- (long long)numberOfItemsInSection:;
- (void)dealloc;
- (id)initWithDataSource:;
- (id)itemAtIndexPath:;
- (id)allSections;
- (id)sectionAtIndex:;
- (id)_safeStateDumpObject;
- (id)identifiersForSectionAtIndex:;
- (id)indexPathForItemWithIdentifiersIntersectingSet:;
- (id)itemsInSectionAtIndex:;
- (id)firstSection;
- (id)dataSource;
- (void)_updateCacheWithObject:atIndexPath:;
- (void).cxx_destruct;
- (id)firstItem;
- (void)enumerateItemsInSectionAtIndex:usingBlock:;
- (long long)numberOfSections;
- (id)lastSection;
- (void)enumerateItemsUsingBlock:;
- (BOOL)hasSameContentAsSectionedCollection:;
- (id)lastItem;
- (id)identifiersForItemAtIndexPath:;
- (id)_cachedObjectAtIndexPath:;
+ (BOOL)supportsSecureCoding;
@end
