@interface EMFQueryResultSorter : NSObject
+ (id)sortResults:withLocaleData:sortType:;
+ (id)_sortResults_default:withLocaleData:;
+ (id)_sortResults_clusterGenderVariantsTogether:withLocaleData:;
@end
