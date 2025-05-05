@interface MRAVLightweightReconnaissanceSession : NSObject
- (void)searchEndpointsForGroupUID:timeout:reason:queue:completion:;
- (void)searchEndpointsForString:timeout:reason:queue:completion:;
- (void)searchEndpointsForOutputDeviceUID:timeout:reason:queue:completion:;
- (void)searchForLogicalOutputDeviceUID:timeout:reason:queue:completion:;
- (void)searchForOutputDeviceUID:timeout:reason:queue:completion:;
- (void)searchEndpointsForRoutingContextUID:timeout:reason:queue:completion:;
- (void)searchEndpointsForCompanionWithTimeout:reason:queue:completion:;
- (void)searchEndpointsWithPredicate:timeout:reason:queue:completion:;
- (void)searchEndpointsForLeaderOutputDeviceUID:timeout:reason:queue:completion:;
@end
