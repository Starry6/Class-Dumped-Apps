@interface CARInputDeviceManager : NSObject
@property (nonatomic) CARSession session;
@property (nonatomic) NSArray inputDevices;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)inputDevices;
- (id)session;
- (void).cxx_destruct;
- (id)description;
- (id)touchpadWithSenderID:;
- (void)performHapticType:deviceUUID:;
- (id)initWithEndpointInputDevices:screenIDs:vehicleInformation:session:;
- (id)_generateInputDevicesWithEndpointInputDevices:screenIDs:vehicleInformation:;
- (void)vehicleInformationChanged:;
- (BOOL)touchpadCharacterRecognitionSupported;
- (void)_enumerateTouchpadsUsingBlock:;
- (id)_inputDeviceWithSenderID:;
- (void)_updateTouchpadSettings:;
- (id)_touchpadSettingsFromVehicleInformation:;
- (id)_initWithInputDevices:session:;
@end
