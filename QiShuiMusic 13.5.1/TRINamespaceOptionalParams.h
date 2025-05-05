@interface TRINamespaceOptionalParams : NSObject
@property (nonatomic) NSURL factorsURL;
@property (nonatomic) TRIAppContainer appContainer;
@property (nonatomic) NSSet upgradeNCVs;
@property (nonatomic) NSInteger cloudKitContainerId;
@property (nonatomic) NSString resourceAttributionIdentifier;
@property (nonatomic) BOOL expensiveNetworkingAllowed;
@property (nonatomic) BOOL enableFetchDuringSetupAssistant;
@property (nonatomic) NSInteger purgeabilityLevel;
- (void)setExpensiveNetworkingAllowed:;
- (id)init;
- (void)setEnableFetchDuringSetupAssistant:;
- (id)upgradeNCVs;
- (void)setResourceAttributionIdentifier:;
- (BOOL)expensiveNetworkingAllowed;
- (void)setCloudKitContainerId:;
- (void)setFactorsURL:;
- (void)setAppContainer:;
- (BOOL)enableFetchDuringSetupAssistant;
- (void)setUpgradeNCVs:;
- (int)purgeabilityLevel;
- (id)factorsURL;
- (int)cloudKitContainerId;
- (void).cxx_destruct;
- (id)resourceAttributionIdentifier;
- (id)appContainer;
- (void)setPurgeabilityLevel:;
- (id)copyWithZone:;
@end
