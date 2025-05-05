@interface GEOCollectionSuggestionResult : NSObject
@property (nonatomic) NSArray collections;
@property (nonatomic) GEOExploreGuides exploreGuides;
- (id)collections;
- (id)exploreGuides;
- (void).cxx_destruct;
- (id)initWithCollectionSuggestionResult:mapsResults:;
@end
