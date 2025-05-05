@interface GEOCollectionResult : NSObject
@property (nonatomic) GEOPlaceCollection collection;
@property (nonatomic) NSArray placeCollectionItems;
- (id)collection;
- (id)placeCollectionItems;
- (void).cxx_destruct;
- (id)initWithCollectionResult:;
+ (id)collectionResultsFromResponse:;
@end
