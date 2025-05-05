@interface PLSpotlightTranslatorUtilities : NSObject
+ (id)spotlightScenesFromScenes:sceneTaxonomy:;
+ (id)textFromGraphData:searchIndexCategoryMask:;
+ (id)textFromGraphData:searchIndexCategoryMask:synonymSearchIndexCategoryMask:synonyms:;
+ (id)spotlightPersonsFromPLPersons:;
+ (id)contentRatingFromScenes:algorithmVersion:;
+ (id)seasonsForDates:calendar:locale:synonymsBySeason:;
@end
