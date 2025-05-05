@interface EDDiagnosticInfoGatherer : NSObject
@property (nonatomic) <EMDiagnosticInfoProvidingXPC> diagnosticInfoProvider;
@property (nonatomic) <EDServerRemoteClientsProvider> remoteClientsProvider;
@property (nonatomic) EDFetchController fetchController;
@property (nonatomic) <EFScheduler> gathererQueue;
@property (nonatomic) EDPersistence persistence;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)persistence;
- (void)setPersistence:;
- (void).cxx_destruct;
- (void)registerDiagnosticInfoProvider:completionHandler:;
- (void)gatherDiagnosticsWithOptions:completionHandler:;
- (void)fetchControllerStatusWithCompletionHandler:;
- (void)databaseStatisticsWithCompletionHandler:;
- (id)fetchController;
- (id)initWithFetchController:remoteClientsProvider:persistence:;
- (id)diagnosticInfoProvider;
- (void)setDiagnosticInfoProvider:;
- (id)remoteClientsProvider;
- (void)setRemoteClientsProvider:;
- (id)gathererQueue;
- (void)setGathererQueue:;
+ (id)log;
@end
