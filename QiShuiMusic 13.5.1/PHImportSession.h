@interface PHImportSession : PHAssetCollection
@property (nonatomic) NSString importSessionID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFetchDictionary:propertyHint:photoLibrary:;
- (id)importSessionID;
+ (id)transformValueExpression:forKeyPath:;
+ (id)identifierCode;
+ (id)fetchType;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)entityKeyMap;
+ (id)propertiesToFetchWithHint:;
+ (id)fetchImportSessionsWithOptions:;
@end
