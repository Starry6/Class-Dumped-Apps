@interface ICSpotlightUtilities : NSObject
+ (id)stringByEscapingSearchString:;
+ (id)rankingQueryFieldsForGenericHighlighting;
+ (id)rankingQueryFieldsForSorting;
+ (id)rankingQueryFieldsForWordSpecificHighlighting;
+ (unsigned long long)rankingQueryLimit;
+ (id)userActivityPersistentIdentifierForNote:;
+ (id)queryFields;
@end
