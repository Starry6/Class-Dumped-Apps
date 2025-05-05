@interface TRIXPCNamespaceManagementClient : NSObject
- (BOOL)startNamespaceDownloadWithName:options:error:;
- (id)init;
- (BOOL)setPurgeabilityLevelsForFactors:forNamespaceName:error:;
- (BOOL)removeLevelsForFactors:withNamespace:factorsState:removeImmediately:error:;
- (BOOL)promoteFactorPackId:forNamespaceName:rolloutDeployment:error:;
- (BOOL)deregisterNamespaceWithNamespaceName:error:;
- (BOOL)registerNamespaceWithNamespaceName:compatibilityVersion:defaultsFileURL:applicationGroup:cloudKitContainerId:error:;
- (BOOL)immediateDownloadForNamespaceNames:allowExpensiveNetworking:error:;
- (unsigned long long)statusOfDownloadForFactors:withNamespace:factorsState:notificationKey:error:;
- (id)loadNamespaceMetadataForNamespaceName:error:;
- (void).cxx_destruct;
- (BOOL)rejectFactorPackId:forNamespaceName:rolloutDeployment:error:;
- (BOOL)setProvisionalFactorPackId:forNamespaceName:error:;
- (id)activeRolloutInformation:;
- (void)downloadLevelsForFactors:withNamespace:queue:factorsState:options:progress:completion:;
@end
