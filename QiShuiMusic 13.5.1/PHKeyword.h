@interface PHKeyword : PHObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString shortcut;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)shortcut;
- (id)initWithFetchDictionary:propertyHint:photoLibrary:;
- (Class)changeRequestClass;
+ (id)identifierCode;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)entityKeyMap;
+ (id)propertiesToFetchWithHint:;
+ (id)localIdentifierWithUUID:;
+ (id)fetchKeywordsWithOptions:;
+ (id)fetchKeywordsWithLocalIdentifiers:options:;
+ (id)fetchKeywordsWithTitles:options:;
+ (id)fetchKeywordsForAsset:options:;
@end
