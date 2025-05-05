@interface GEOAllCollectionsViewResult : NSObject
@property (nonatomic) NSArray collectionIdentifiers;
@property (nonatomic) NSArray resultFilters;
- (id)collectionIdentifiers;
- (void).cxx_destruct;
- (id)resultFilters;
- (id)initWithAllCollectionsViewResult:withPlaces:;
- (id)initWithAllCollectionsViewResult:;
@end
