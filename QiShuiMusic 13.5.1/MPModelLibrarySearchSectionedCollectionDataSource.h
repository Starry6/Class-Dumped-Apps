@interface MPModelLibrarySearchSectionedCollectionDataSource : NSObject
@property (nonatomic) NSArray resultContainers;
@property (nonatomic) MPModelLibrarySearchRequest request;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)numberOfItemsInSection:;
- (id)itemAtIndexPath:;
- (id)sectionAtIndex:;
- (id)request;
- (void).cxx_destruct;
- (void)setRequest:;
- (unsigned long long)numberOfSections;
- (id)identifiersForItemAtIndexPath:;
- (BOOL)hasMoreResultsForSectionAtIndex:;
- (long long)searchWeightForIndexPath:;
- (id)initWithEntitiesQueryResultContainers:;
- (id)resultContainers;
@end
