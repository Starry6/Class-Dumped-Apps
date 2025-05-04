@interface AWEIMProximitySensorManager : HTSService
@property (nonatomic) NSMutableSet observers;
@property (nonatomic) AWEIMFakeBlackScreenHelper fakeBlackScreenHelper;
@property (nonatomic) BOOL hasCheckedSensorAvailability;
@property (nonatomic) BOOL isProximitySensorAvailable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)proximityMonitorStateChangeNotification:;
- (id)fakeBlackScreenHelper;
- (void)addProximityStateObserver:;
- (void)removeProximityStateObserver:;
- (BOOL)isProximitySensorAvailable;
- (void)setFakeBlackScreenHelper:;
- (BOOL)hasCheckedSensorAvailability;
- (void)setHasCheckedSensorAvailability:;
- (void)setIsProximitySensorAvailable:;
- (id)init;
- (void)dealloc;
- (id)observers;
- (void).cxx_destruct;
- (void)setObservers:;
+ (int)serviceScopeType;
@end
