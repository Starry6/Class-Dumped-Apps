@interface PLSearchTrackedChangeTypes : NSObject
@property (nonatomic) PLSearchTrackedAttributes searchTrackedAttributes;
- (void).cxx_destruct;
- (id)searchTrackedAttributes;
- (BOOL)shouldUpdateSearchIndexForChange:entityName:photoLibrary:;
- (id)_changesTrackedBySearchForEntity:;
- (id)trackedEntityNameForChange:photoLibrary:;
- (id)uuidForPersistentHistoryDeletionChange:photoLibrary:;
- (void)setSearchTrackedAttributes:;
+ (id)entityNamesIndexedBySearch;
+ (BOOL)isEntityIndexedBySearch:;
@end
