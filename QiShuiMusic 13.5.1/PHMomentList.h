@interface PHMomentList : PHCollectionList
- (long long)collectionListType;
- (id)localizedTitle;
- (id)description;
- (BOOL)hasLocalizedTitle;
- (BOOL)hasLocationInfo;
- (id)localizedLocationNames;
- (id)initWithFetchDictionary:propertyHint:photoLibrary:;
- (BOOL)collectionHasFixedOrder;
- (Class)changeRequestClass;
+ (id)transformValueExpression:forKeyPath:;
+ (id)identifierCode;
+ (id)fetchType;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)entityKeyMap;
+ (id)propertiesToFetchWithHint:;
@end
