@interface PFSceneTaxonomy : PFCachingArchiveIndex
@property (nonatomic) NSString sha256Hash;
@property (nonatomic) PFSceneTaxonomyNode rootNode;
@property (nonatomic) NSString digest;
@property (nonatomic) r^v rootNodeRef;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mad_sceneNameFromSceneId:;
- (id)mad_sceneIdFromSceneName:;
- (unsigned long long)nodeCount;
- (id)digest;
- (id)init;
- (id)localizedStringForKey:;
- (unsigned long long)indexFileVersion;
- (BOOL)loadIndexFile:fileSize:;
- (id)indexLabel;
- (void).cxx_destruct;
- (id)description;
- (id)archiveLineParserForIndexPath:;
- (id)nodeForName:;
- (BOOL)loadOrCreateIndex;
- (id).cxx_construct;
- (id)rootNode;
- (id)indexName;
- (id)initWithIdentifier:error:;
- (id)initWithLatestTaxonomy;
- (id)nodeRefForSceneClassId:;
- (id)nodeForSceneClassId:;
- (id)dataArchivePath;
- (id)initWithDataPath:localizationBundle:tableName:;
- (id)initWithDataPath:identifier:localizationBundle:tableName:error:;
- (id)rootNodeRef;
- (id)nodeRefForName:;
- (unsigned int)sceneClassIdForName:;
+ (id)vcp_sharedTaxonomy;
+ (BOOL)mad_isExpectedTaxonomy;
+ (id)sharedTaxonomy;
+ (id)latestTaxonomyIdentifier;
@end
