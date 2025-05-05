@interface AFUIApplicationSiriTaskDeliverer : NSObject
@property (nonatomic) AFSiriTaskmaster taskmaster;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (void)siriTaskDidFinish;
- (void)deliverSiriTask:completionHandler:;
- (id)initWithAppBundleIdentifier:;
- (void)_startAppStateMonitoringForRequest:;
- (void)_processAssertionWasInvalidatedForRequest:;
- (void)processAssertionWasInvalidatedForRequest:;
- (void)_processAssertionWasAcquired:;
- (void)_handleSuccessfulAppLaunchToBackground:forRequest:completion:;
- (void)_invalidateBackboardServices;
- (void)_invalidateAssertionTimer;
- (id)taskmaster;
- (void)setTaskmaster:;
@end
