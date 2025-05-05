@interface GEORelatedEntitySection : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) I index;
@property (nonatomic) q sectionType;
@property (nonatomic) GEORelatedCollectionSection relatedCollectionSection;
@property (nonatomic) NSArray relatedPlaceCollections;
- (long long)sectionType;
- (id)init;
- (unsigned int)index;
- (void).cxx_destruct;
- (id)name;
- (id)initWithRelatedEntitySection:mapsResults:;
- (id)placeCollectionsWithCollectionSection:;
- (id)relatedCollectionSection;
- (id)relatedPlaceCollections;
@end
