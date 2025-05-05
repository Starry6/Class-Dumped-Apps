@interface GEORegionalResourcesVersionMigrator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)taskForNewTileGroup:inResourceManifest:oldTileGroup:activeScales:activeScenarios:dataSet:updateType:;
- (void).cxx_destruct;
- (id)initWithManifestConfiguration:mapLayerDataManager:;
@end
