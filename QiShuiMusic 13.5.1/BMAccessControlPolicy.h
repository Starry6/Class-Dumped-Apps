@interface BMAccessControlPolicy : NSObject
@property (nonatomic) BOOL allowsConnectionToAccessService;
@property (nonatomic) BOOL allowsAccessToFlexibleStorage;
@property (nonatomic) BOOL allowsConnectionToComputePublisherService;
@property (nonatomic) BOOL allowsConnectionToComputeSourceService;
@property (nonatomic) BOOL allowsProxyingBiomeEndpoint;
@property (nonatomic) BOOL allowsAccessToContextSync;
- (id)init;
- (BOOL)allowsAccessToStream:withMode:;
- (void)_warnAboutInternalEntitlement:streamIdentifier:;
- (BOOL)allowsConnectionToComputePublisherService;
- (BOOL)allowsConnectionToComputeSourceService;
- (BOOL)allowsAccessToFlexibleStorage;
- (unsigned long long)checkAccessToStream:withMode:;
- (BOOL)allowsConnectionToAccessService;
- (BOOL)allowsAccessToClientCompute:;
- (BOOL)allowsComputeSourceAccessToStreams:;
- (BOOL)allowsComputePublisherAccessToStreams:;
- (void).cxx_destruct;
- (id)initWithProcess:;
- (BOOL)allowsProxyingBiomeEndpoint;
- (BOOL)allowsAccessToContextSyncStreams:;
- (BOOL)allowsAccessToContextSync;
+ (id)policyForProcess:;
@end
