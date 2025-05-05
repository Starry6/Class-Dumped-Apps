@interface MNDirectionsRequestManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)requestDirections:withIdentifier:auditToken:finishedHandler:;
- (void)cancelDirectionsRequestWithIdentifier:;
- (void)_requestServerDirections:preferredRoute:withIdentifier:auditToken:finishedHandler:;
- (void)_requestDirectionsFromTraceWithPath:feedback:auditToken:finishedHandler:;
- (void)_logRoutes:error:;
@end
