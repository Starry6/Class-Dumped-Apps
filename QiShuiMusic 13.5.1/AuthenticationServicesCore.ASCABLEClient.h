@interface AuthenticationServicesCore.ASCABLEClient : NSObject
@property (nonatomic) NSURL qrCodeURL;
- (id)init;
- (void)centralManager:didDiscoverPeripheral:advertisementData:RSSI:;
- (void)centralManagerDidUpdateState:;
- (void).cxx_destruct;
- (id)qrCodeURL;
- (id)initWithDelegate:isRegistrationRequest:;
- (void)performAuthenticationOperation:forRelyingPartyIdentifier:completionHandler:;
- (void)cancelIfNecessary;
@end
