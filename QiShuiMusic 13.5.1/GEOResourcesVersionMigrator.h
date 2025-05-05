@interface GEOResourcesVersionMigrator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_addRunningTask:;
- (void)_removeRunningTask:;
- (id)taskForNewTileGroup:inResourceManifest:oldTileGroup:activeScales:activeScenarios:dataSet:updateType:;
- (void).cxx_destruct;
- (id)initWithManifestConfiguration:mapLayerDataManager:;
@end
