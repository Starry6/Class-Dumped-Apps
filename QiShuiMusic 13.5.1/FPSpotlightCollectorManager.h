@interface FPSpotlightCollectorManager : NSObject
@property (nonatomic) @ providerDomainChangesToken;
@property (nonatomic) NSSet currentMountPoints;
@property (nonatomic) NSSet effectiveCurrentMountPoints;
@property (nonatomic) NSMutableDictionary collectorByDescriptor;
@property (nonatomic) BOOL areMountQueriesEnabled;
@property (nonatomic) NSArray collectors;
- (id)init;
- (void)dealloc;
- (id)_recursiveDescription;
- (void).cxx_destruct;
- (void)registerDataSource:;
- (void)unregisterDataSource:;
- (void)enableMountPointQueries;
- (void)disableMountPointQueries;
- (id)mountPointsForCollector:;
- (void)collectorDidFinish:;
- (id)collectors;
- (id)effectiveCurrentMountPoints;
- (void)suspendCollectors;
- (void)resumeCollectors;
- (void)_observeFileProviderDomains;
- (id)providerDomainChangesToken;
- (void)setProviderDomainChangesToken:;
- (id)currentMountPoints;
- (void)setCurrentMountPoints:;
- (id)collectorByDescriptor;
- (void)setCollectorByDescriptor:;
- (BOOL)areMountQueriesEnabled;
- (void)setAreMountQueriesEnabled:;
+ (id)sharedInstance;
+ (id)_mountPointsFromProviderDomains:;
@end
