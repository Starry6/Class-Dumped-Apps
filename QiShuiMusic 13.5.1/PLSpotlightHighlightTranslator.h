@interface PLSpotlightHighlightTranslator : NSObject
+ (id)spotlightSearchableItemFromHighlight:graphData:searchConfiguration:;
+ (id)_personsFromGraphData:photoLibrary:;
+ (id)_seasonsForHighlight:graphData:searchConfiguration:;
+ (id)_scenesFromGraphData:sceneTaxonomyProvider:;
@end
