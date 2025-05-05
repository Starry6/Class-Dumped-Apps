@interface PLSearchFetchUtilities : NSObject
+ (id)fetchObjectsEligibleForSearchRebuildFromPhotoLibrary:entityName:fetchLimit:;
+ (id)fetchObjectsWithinObjectIDs:entityName:fetchLimit:photoLibrary:error:;
+ (id)searchIndexingEligibilityPredicateForEntityName:;
+ (id)_searchRebuildEligibilityPredicateForEntityName:;
+ (id)_fetchObjectsForEntityName:predicate:fetchLimit:photoLibrary:error:;
@end
