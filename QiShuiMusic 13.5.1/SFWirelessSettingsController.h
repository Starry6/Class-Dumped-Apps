@interface SFWirelessSettingsController : NSObject
@property (nonatomic) <SFWirelessSettingsControllerDelegate> delegate;
@property (nonatomic) BOOL airplaneModeEnabled;
@property (nonatomic) BOOL bluetoothEnabled;
@property (nonatomic) BOOL wifiEnabled;
@property (nonatomic) Q ultraWideBandStatus;
@property (nonatomic) BOOL wirelessAccessPointEnabled;
@property (nonatomic) BOOL wirelessCarPlayEnabled;
@property (nonatomic) BOOL deviceSupportsWAPI;
- (id)init;
- (void)dealloc;
- (void)setAirplaneModeEnabled:;
- (BOOL)isAirplaneModeEnabled;
- (BOOL)isWirelessCarPlayEnabled;
- (void)setDelegate:;
- (BOOL)isWifiEnabled;
- (id)delegate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)handleOperationCallback:event:withResults:;
- (void)setWifiEnabled:;
- (void)setBluetoothEnabled:;
- (BOOL)isBluetoothEnabled;
- (BOOL)deviceSupportsWAPI;
- (BOOL)isWirelessAccessPointEnabled;
- (void)setWirelessAccessPointEnabled:;
- (unsigned long long)ultraWideBandStatus;
@end
