@interface MKDirections : NSObject
@property (nonatomic) BOOL calculating;
- (id)initWithRequest:;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_cleanupLocationOperation;
- (BOOL)isCalculating;
- (void)_establishCurrentLocationAndThen:;
- (void)_performWithValidCurrentLocationAndWaypointsForQuickETA:traits:handler:;
- (void)calculateDirectionsWithCompletionHandler:;
- (void)_calculateDirectionsWithTraits:completionHandler:;
- (void)_issueDirectionsRequestForOrigin:destination:completionHandler:;
- (void)_calculateETAWithTraits:completionHandler:;
- (void)_issueETARequestForOrigin:destination:completionHandler:;
- (void)calculateETAWithCompletionHandler:;
@end
