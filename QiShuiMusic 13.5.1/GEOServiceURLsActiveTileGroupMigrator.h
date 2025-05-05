@interface GEOServiceURLsActiveTileGroupMigrator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needsMigrationForNewTileGroup:inResourceManifest:oldTileGroup:dataSet:;
- (id)taskForNewTileGroup:inResourceManifest:oldTileGroup:activeScales:activeScenarios:dataSet:updateType:;
- (void).cxx_destruct;
- (id)initWithManifestConfiguration:mapLayerDataManager:;
@end
