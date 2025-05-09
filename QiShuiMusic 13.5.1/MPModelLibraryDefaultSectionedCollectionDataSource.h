@interface MPModelLibraryDefaultSectionedCollectionDataSource : NSObject
@property (nonatomic) NSDictionary indexPathToContainerUniqueIDMap;
@property (nonatomic) {shared_ptr<std::vector<std::shared_ptr<mlcore::Entity>>>=^v^{__shared_weak_count}} itemIdentifierQueryResults;
@property (nonatomic) {shared_ptr<mlcore::EntityQueryResult>=^{EntityQueryResult}^{__shared_weak_count}} itemQueryResults;
@property (nonatomic) MPModelLibraryRequest request;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)_adjustedGlobalIndexForIndexPath:;
- (BOOL)respondsToSelector:;
- (unsigned long long)numberOfItemsInSection:;
- (id)_buildIndexPathToContainerUniqueIDMapFromItemQueryResults:;
- (id)initWithRequest:itemQueryResults:itemIdentifierQueryResults:;
- (id)_stateDumpObject;
- (long long)indexOfSectionForSectionIndexTitleAtIndex:;
- (id)itemIdentifierQueryResults;
- (id)itemAtIndexPath:;
- (id)sectionAtIndex:;
- (BOOL)_allowedEntityIdentifiersContainsAllPersistentIDs;
- (id)request;
- (BOOL)hasSameContentAsDataSource:;
- (id)identifiersForSectionAtIndex:;
- (BOOL)_usesSections;
- (id)indexPathForItemWithIdentifiersIntersectingSet:;
- (id)optionalSectionIndexTitlesRange;
- (id)itemQueryResults;
- (void).cxx_destruct;
- (void)_populateIndexMap;
- (id)sectionIndexTitles;
- (unsigned long long)numberOfSections;
- (id).cxx_construct;
- (void)setIndexPathToContainerUniqueIDMap:;
- (id)indexPathToContainerUniqueIDMap;
- (id)identifiersForItemAtIndexPath:;
@end
