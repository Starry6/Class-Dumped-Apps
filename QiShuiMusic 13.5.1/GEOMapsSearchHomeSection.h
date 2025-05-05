@interface GEOMapsSearchHomeSection : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q sectionType;
@property (nonatomic) NSArray searchCategories;
@property (nonatomic) GEOCollectionSuggestionResult collectionSuggestions;
@property (nonatomic) GEOPublisherSuggestionResult publisherSuggestions;
@property (nonatomic) GEOGuideLocationSuggestionResults guideLocationSuggestsions;
- (unsigned long long)sectionType;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)initWithMapsSearchHomeSection:mapsResults:;
- (BOOL)dataModelIsValid:;
- (id)collectionSuggestions;
- (id)publisherSuggestions;
- (id)searchCategories;
- (id)guideLocationSuggestsions;
@end
