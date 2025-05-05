@interface MNNavigationClientProxy : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)cancelDirectionsRequestWithIdentifier:;
- (void)requestDirections:withIdentifier:handler:;
- (id)_directionsRequestManager;
@end
