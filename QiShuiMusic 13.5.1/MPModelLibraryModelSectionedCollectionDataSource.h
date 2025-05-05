@interface MPModelLibraryModelSectionedCollectionDataSource : NSObject
@property (nonatomic) {shared_ptr<std::map<long long itemEntityQueryResults;
@property (nonatomic) {shared_ptr<mlcore::EntityQueryResult>=^{EntityQueryResult}^{__shared_weak_count}} sectionEntityQueryResult;
@property (nonatomic) MPModelLibraryRequest request;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)respondsToSelector:;
- (unsigned long long)numberOfItemsInSection:;
- (unsigned long long)_adjustedIndexForSectionIndex:;
- (id)itemAtIndexPath:;
- (id)itemEntityQueryResults;
- (id)sectionAtIndex:;
- (BOOL)_allowedEntityIdentifiersContainsAllPersistentIDs;
- (id)request;
- (BOOL)hasSameContentAsDataSource:;
- (id)identifiersForSectionAtIndex:;
- (id)indexPathForItemWithIdentifiersIntersectingSet:;
- (id)sectionEntityQueryResult;
- (void).cxx_destruct;
- (void)_populateIndexMap;
- (id)initWithRequest:sectionQueryResults:itemQueryResults:;
- (unsigned long long)numberOfSections;
- (id).cxx_construct;
- (id)identifiersForItemAtIndexPath:;
@end
