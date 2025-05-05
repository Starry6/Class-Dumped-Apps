@interface GEOSearchSectionList : NSObject
@property (nonatomic) NSArray searchSections;
@property (nonatomic) NSArray geoMapItemIdentifiers;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSearchSections:;
- (id)initWithSearchSectionList:mapsResults:;
- (unsigned long long)indexOfItemWithIdentifier:;
- (id)searchSections;
- (id)geoMapItemIdentifiers;
+ (id)identifiersWithSearchSections:;
@end
