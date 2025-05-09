@interface NSPManager : NSObject
@property (nonatomic) NWPathEvaluator policyEvaluator;
@property (nonatomic) NSDictionary appRules;
@property (nonatomic) NPKeyBag keybag;
@property (nonatomic) NPKeyBag inUseKeybag;
@property (nonatomic) NSPConfiguration configuration;
@property (nonatomic) NSPFlowDivert flowDivert;
@property (nonatomic) NSMutableDictionary flowInfoMap;
@property (nonatomic) BOOL isObserving;
@property (nonatomic) NSArray currentAgents;
@property (nonatomic) NSMutableDictionary fallbackCounts;
@property (nonatomic) <NSPManagerDelegate> delegate;
@property (nonatomic) NSString signingIdentifier;
@property (nonatomic) NSPAppRule matchingAppRule;
@property (nonatomic) NSMutableArray knownFlows;
@property (nonatomic) @? pendingCancellationHandler;
@property (nonatomic) NSArray testLatencyMap;
@property (nonatomic) BOOL testFetchDaypass;
@property (nonatomic) Q testLatencyMapIndex;
@property (nonatomic) I nextFlowID;
@property (nonatomic) I tunnelCount;
@property (nonatomic) NSObject<OS_nw_endpoint> currentTunnelEndpoint;
@property (nonatomic) NWPathEvaluator pathEvaluator;
@property (nonatomic) BOOL currentNetworkHasProxies;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) @? changeHandler;
@property (nonatomic) @? connectionInfoSetHandler;
@property (nonatomic) @? tunnelConnectedHandler;
@property (nonatomic) double timeIntervalSinceLastUsage;
@property (nonatomic) BOOL disableIdleTimeout;
@property (nonatomic) BOOL isFirstTunnel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)signingIdentifier;
- (id)changeHandler;
- (void)start;
- (BOOL)isObserving;
- (void)setAppRules:;
- (void)setDelegate:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)setConfiguration:;
- (void)fetchStateForClient:withPeerEndpoint:completionHandler:;
- (id)appRules;
- (id)configuration;
- (id)delegate;
- (id)pathEvaluator;
- (void)stopWithCompletionHandler:;
- (void).cxx_destruct;
- (void)setChangeHandler:;
- (BOOL)isEnabled;
- (id)flowDivert;
- (void)container:didRequestFlowDivertControlSocketWithCompletionHandler:;
- (void)container:didStartWithError:;
- (BOOL)disableIdleTimeout;
- (void)setDisableIdleTimeout:;
- (id)keybag;
- (void)setKeybag:;
- (void)setIsObserving:;
- (double)timeIntervalSinceLastUsage;
- (BOOL)isFirstTunnel;
- (void)tunnelDidCancel:;
- (void)tunnelDidConnect:;
- (void)tunnelIsReady:;
- (void)tunnel:flowDidFallbackWithReason:;
- (void)container:didFailWithError:;
- (void)container:didSetTunnelConfiguration:completionHandler:;
- (void)waitForTunnelsToCancelWithCompletionHandler:;
- (void)handlePolicyUpdate;
- (void)startWithConfiguration:appRules:delegate:;
- (id)instantiateFlowWithTunnel:inputProtocol:;
- (id)instantiateTunnelWithEndpoint:parameters:;
- (void)setConnectionInfo:forIdentifier:;
- (id)getConnectionInfoForIdentifier:;
- (id)getAppRuleMatchingParameters:flowProperties:;
- (id)createReplacementEndpointForEndpoint:properties:;
- (id)createTransformsForEndpoint:parameters:;
- (void)sendUsageReport:;
- (BOOL)currentNetworkHasProxies;
- (id)createAppRuleMapWithRules:;
- (BOOL)shouldSetConfigurationToAppRule:edgeSet:;
- (id)buildTestLatencyMap:;
- (void)ingestTestLatencyMap:local:completionHandler:;
- (unsigned long long)getTestLatencyRTT:parameters:;
- (BOOL)useTestLatencyMap;
- (BOOL)useTestDaypass;
- (void)resetTestLatencyMapIndex:;
- (id)connectionInfoSetHandler;
- (void)setConnectionInfoSetHandler:;
- (id)tunnelConnectedHandler;
- (void)setTunnelConnectedHandler:;
- (id)policyEvaluator;
- (id)inUseKeybag;
- (void)setInUseKeybag:;
- (void)setFlowDivert:;
- (id)flowInfoMap;
- (void)setFlowInfoMap:;
- (id)currentAgents;
- (void)setCurrentAgents:;
- (id)fallbackCounts;
- (id)matchingAppRule;
- (void)setMatchingAppRule:;
- (id)knownFlows;
- (id)pendingCancellationHandler;
- (void)setPendingCancellationHandler:;
- (id)testLatencyMap;
- (void)setTestLatencyMap:;
- (BOOL)testFetchDaypass;
- (void)setTestFetchDaypass:;
- (unsigned long long)testLatencyMapIndex;
- (void)setTestLatencyMapIndex:;
- (unsigned int)nextFlowID;
- (void)setNextFlowID:;
- (unsigned int)tunnelCount;
- (void)setTunnelCount:;
- (id)currentTunnelEndpoint;
- (void)setCurrentTunnelEndpoint:;
+ (id)sharedManager;
@end
