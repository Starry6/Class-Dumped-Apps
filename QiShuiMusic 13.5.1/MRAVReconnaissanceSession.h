@interface MRAVReconnaissanceSession : NSObject
@property (nonatomic) NSArray matchingOutputDeviceUIDs;
@property (nonatomic) NSString matchingOutputDeviceGroupID;
@property (nonatomic) I endpointFeatures;
@property (nonatomic) MRAVRoutingDiscoverySession discoverySession;
@property (nonatomic) BOOL useWeakMatching;
@property (nonatomic) BOOL returnPartialResults;
@property (nonatomic) BOOL waitForCompleteClusters;
@property (nonatomic) NSArray matchingLogicalDeviceIDs;
- (void)cancelSearch;
- (unsigned int)endpointFeatures;
- (void)dealloc;
- (id)discoverySession;
- (void).cxx_destruct;
- (id)initWithOutputDeviceUIDs:outputDeviceGroupID:features:;
- (id)matchingOutputDeviceUIDs;
- (id)matchingOutputDeviceGroupID;
- (void)beginSearchWithTimeout:completion:;
- (void)beginSearchWithTimeout:endpointsCompletion:;
- (void)beginSearchWithTimeout:mapCompletion:;
- (BOOL)useWeakMatching;
- (void)setUseWeakMatching:;
- (BOOL)returnPartialResults;
- (void)setReturnPartialResults:;
- (BOOL)waitForCompleteClusters;
- (void)setWaitForCompleteClusters:;
- (id)matchingLogicalDeviceIDs;
- (void)setMatchingLogicalDeviceIDs:;
@end
