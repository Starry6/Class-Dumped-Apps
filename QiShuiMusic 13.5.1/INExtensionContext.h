@interface INExtensionContext : NSObject
@property (nonatomic) NSString _recordRoute;
@property (nonatomic) NSUUID _recordDeviceUID;
@property (nonatomic) NSString _recordDeviceIdentifier;
@property (nonatomic) NSArray _airPlayRouteIdentifiers;
@property (nonatomic) I _audioSessionID;
- (unsigned int)_audioSessionID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)_setAudioSessionID:;
- (id)_recordRoute;
- (void)_setRecordRoute:;
- (id)_recordDeviceUID;
- (void)_setRecordDeviceUID:;
- (id)_recordDeviceIdentifier;
- (void)_setRecordDeviceIdentifier:;
- (id)_airPlayRouteIdentifiers;
- (void)_setAirPlayRouteIdentifiers:;
+ (BOOL)supportsSecureCoding;
@end
