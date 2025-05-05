@interface WKGeolocationProviderIOS : NSObject
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_startUpdating;
- (void)_stopUpdating;
- (void)_setEnableHighAccuracy:;
- (id)initWithProcessPool:;
- (void)decidePolicyForGeolocationRequestFromOrigin:completionHandler:view:;
- (void)geolocationAuthorizationGranted;
- (void)geolocationAuthorizationDenied;
- (void)positionChanged:;
- (void)errorOccurred:;
- (void)resetGeolocation;
@end
