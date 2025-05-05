@interface AFCoreAnalyticsCrossDeviceEvent : NSObject
@property (nonatomic) NSString nearbyDevicesLoggingID;
@property (nonatomic) NSMutableDictionary nearbyDevicesPayloads;
- (id)init;
- (id)_descriptionWithIndent:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithNearbyDevicesLoggingID:;
- (void)addNearbyDeviceContexts:proximityInfo:;
- (void)_setTargetedDeviceContextIdentifier:withAction:payload:;
- (void)addCoreAnalyticsDeviceTargetedWithContextIdentifier:commandResultDescription:;
- (id)nearbyDevicesLoggingID;
- (id)nearbyDevicesPayloads;
- (void)setNearbyDevicesPayloads:;
@end
