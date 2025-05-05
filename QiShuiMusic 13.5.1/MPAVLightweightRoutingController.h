@interface MPAVLightweightRoutingController : NSObject
@property (nonatomic) q discoveryMode;
@property (nonatomic) NSArray pickedRoutes;
@property (nonatomic) BOOL devicePresenceDetected;
@property (nonatomic) NSString name;
@property (nonatomic) <MPAVLightweightRoutingControllerDelegate> delegate;
- (void)setDiscoveryMode:;
- (void)dealloc;
- (long long)discoveryMode;
- (void)setDelegate:;
- (void)_availableOutputDevicesDidChangeNotification:;
- (id)initWithName:;
- (id)delegate;
- (void).cxx_destruct;
- (id)pickedRoutes;
- (id)description;
- (id)name;
- (void)_outputContextDevicesDidChangeNotification:;
- (BOOL)isDevicePresenceDetected;
- (void)_onSyncSelf_schedulePickedRoutesChangedNotification;
- (void)_postPickedRoutesChangedNotification;
@end
