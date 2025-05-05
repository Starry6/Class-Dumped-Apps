@interface WebGeolocationProviderIOS : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)suspend;
- (void)resume;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setEnableHighAccuracy:;
- (void)geolocationAuthorizationGranted;
- (void)geolocationAuthorizationDenied;
- (void)positionChanged:;
- (void)errorOccurred:;
- (void)resetGeolocation;
- (void)_handlePendingInitialPosition:;
- (void)registerWebView:;
- (void)unregisterWebView:;
- (id)lastPosition;
- (void)initializeGeolocationForWebView:listener:;
- (void)stopTrackingWebView:;
+ (id)sharedGeolocationProvider;
@end
