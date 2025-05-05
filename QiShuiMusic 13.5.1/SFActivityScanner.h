@interface SFActivityScanner : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) <SFActivityScannerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)scanManager:receivedAdvertisement:;
- (void)scanManager:lostDeviceWithDevice:;
- (id)identifier;
- (void)scanManager:foundDeviceWithDevice:;
- (void)activityPayloadFromDevice:forAdvertisementPayload:command:timeout:withCompletionHandler:;
- (id)delegate;
- (void).cxx_destruct;
- (void)scanManager:pairedDevicesChanged:;
- (id)initWithDelegate:;
- (void)scanForTypes:;
- (void)setIdentifier:;
@end
