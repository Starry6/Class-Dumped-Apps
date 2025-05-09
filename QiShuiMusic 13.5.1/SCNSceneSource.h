@interface SCNSceneSource : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) NSData data;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)debugQuickLookObject;
- (id)url;
- (void)dealloc;
- (id)data;
- (id)propertyForKey:;
- (id)library;
- (id)initWithData:options:;
- (id)description;
- (id)initWithURL:options:;
- (Class)unarchiver:cannotDecodeObjectOfClassName:originalClasses:;
- (id)sceneWithOptions:error:;
- (id)sceneSourceOptions;
- (long long)countOfScenes;
- (long long)sceneCount;
- (id)sceneAtIndex:options:;
- (id)sceneAtIndex:options:error:;
- (id)_createSceneRefWithOptions:statusHandler:;
- (id)_sceneWithClass:options:statusHandler:;
- (id)sceneWithClass:options:statusHandler:;
- (id)sceneWithOptions:statusHandler:;
- (id)sceneWithClass:options:error:;
- (id)copyPropertiesAtIndex:options:;
- (id)sceneSourceRef;
- (id)c3dDataRepresentation;
- (id)entryWithIdentifier:withClass:;
- (id)identifiersOfEntriesWithClass:;
- (BOOL)_appendToEntries:entriesWithType:passingTest:entryObjectConstructor:;
- (id)entriesPassingTest:;
- (id)entryWithID:withClass:;
- (id)IDsOfEntriesWithClass:;
- (long long)sourceStatus;
- (BOOL)canExportToColladaWithNoDataLoss;
- (id)performConsistencyCheck;
- (id)debugQuickLookData;
+ (id)sceneSourceWithURL:options:;
+ (BOOL)_shouldCacheWithOptions:;
+ (id)_cachedSceneSourceForURL:options:;
+ (void)_cacheSceneSource:forURL:options:;
+ (void)_removeCachedSceneSourceIfNeededForURL:;
+ (id)sceneSourceWithData:options:;
+ (id)sceneTypes;
+ (id)sceneFileTypes;
@end
