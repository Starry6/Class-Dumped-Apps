@interface IMChorosMonitor : NSObject
@property (nonatomic) CTStewieStateMonitor coreTelephonyStewieMonitor;
@property (nonatomic) CoreTelephonyClient telephonyClient;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)getState;
- (BOOL)isStewieActive;
- (void)stateChanged:;
- (void).cxx_destruct;
- (id)telephonyClient;
- (void)setTelephonyClient:;
- (void)openStewieAppWithCompletion:;
- (BOOL)shouldShowTextEmergencyServicesButton;
- (void)placeEmergencyCallWithCompletion:;
- (BOOL)_activeServicesHasEmergency:;
- (id)coreTelephonyStewieMonitor;
- (void)setCoreTelephonyStewieMonitor:;
+ (id)sharedInstance;
@end
