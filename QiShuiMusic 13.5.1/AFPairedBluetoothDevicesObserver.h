@interface AFPairedBluetoothDevicesObserver : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)updatePairedDevices:;
- (id)pairedBluetoothDevices;
+ (id)sharedObserver;
@end
