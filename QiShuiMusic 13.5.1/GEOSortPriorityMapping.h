@interface GEOSortPriorityMapping : NSObject
@property (nonatomic) NSArray entries;
- (id)init;
- (void).cxx_destruct;
- (id)entries;
- (id)initWithEntries:;
- (id)initWithAutocompleteResultSortPriorityMapping:;
+ (id)sortPriorityMappingFromDefaultsValue:;
+ (long long)resultTypeForACResultType:;
+ (long long)resultSubtypeForACResultSubtype:;
@end
