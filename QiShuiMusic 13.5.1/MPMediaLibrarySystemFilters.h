@interface MPMediaLibrarySystemFilters : NSObject
- (void)_updateFilters;
- (id)_initWithLibrary:;
- (void).cxx_destruct;
- (void)_cloudLibraryAvailabilityDidChange:;
- (BOOL)shouldExcludePurchaseHistoryContent;
+ (id)globalSerialQueue;
+ (id)filtersForLibrary:;
+ (id)systemFiltersPerLibrary;
@end
