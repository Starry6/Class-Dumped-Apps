@interface PHProject : PHAssetCollection
@property (nonatomic) NSData projectData;
@property (nonatomic) NSString projectExtensionIdentifier;
@property (nonatomic) NSString projectDocumentType;
@property (nonatomic) NSString projectRenderUuid;
@property (nonatomic) NSData projectExtensionData;
@property (nonatomic) BOOL hasProjectPreview;
- (BOOL)canPerformEditOperation:;
- (void).cxx_destruct;
- (id)creationDate;
- (id)initWithFetchDictionary:propertyHint:photoLibrary:;
- (BOOL)canContainCustomKeyAssets;
- (BOOL)shouldQueryForCustomKeyAsset;
- (BOOL)hasProjectPreview;
- (id)projectExtensionData;
- (id)projectData;
- (id)projectExtensionIdentifier;
- (id)projectDocumentType;
- (id)projectRenderUuid;
+ (id)transformValueExpression:forKeyPath:;
+ (id)identifierCode;
+ (id)fetchType;
+ (id)managedEntityName;
+ (id)entityKeyMap;
+ (id)propertiesToFetchWithHint:;
+ (id)localIdentifierWithUUID:;
+ (id)fetchProjectsWithOptions:;
+ (id)fetchProjectsWithLocalIdentifiers:options:;
@end
