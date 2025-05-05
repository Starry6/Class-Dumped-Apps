@interface PHSmartAlbum : PHAssetCollection
- (BOOL)collectionHasFixedOrder;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)_collectionSubtypeExpressionForFetchRequests;
+ (id)fetchPredicateFromComparisonPredicate:options:;
+ (id)albumKindFromSmartAlbumSubtype:;
@end
