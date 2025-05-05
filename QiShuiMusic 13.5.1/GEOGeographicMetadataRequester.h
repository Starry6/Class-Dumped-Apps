@interface GEOGeographicMetadataRequester : NSObject
@property (nonatomic) @? processBlock;
- (id)_doSimpleLookup:rootQuadKey:error:;
- (id)processBlock;
- (void)_fetch;
- (void)setProcessBlock:;
- (void).cxx_destruct;
- (void)_start;
- (id)initWithLocation:type:;
- (id)_doTerritoryRegulatoryLookup:error:;
- (void)reportCorrupt:;
+ (void)fetchPossibleTerritoriesForLocation:responseQueue:responseBlock:;
+ (void)_fetchPossibleTerritoriesForLocation:retryCount:responseQueue:responseBlock:;
+ (void)fetchDataForLocation:type:responseQueue:responseBlock:;
+ (void)_fetchDataForLocation:type:retryCount:responseQueue:responseBlock:;
@end
