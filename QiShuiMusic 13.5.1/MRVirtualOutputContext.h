@interface MRVirtualOutputContext : MRAVOutputContext
- (void)resetPredictedOutputDevice;
- (id)predictedOutputDevice;
- (BOOL)isVolumeControlAvailable;
- (float)volume;
- (id)uniqueIdentifier;
- (id)outputDevices;
- (void)removeAllOutputDevicesWithCallbackQueue:block:;
- (BOOL)supportsVolumeControl;
- (void)removeOutputDevices:initiator:withCallbackQueue:block:;
- (void)setVolume:;
- (id)contextID;
- (BOOL)supportsMultipleBluetoothOutputDevices;
- (void)setOutputDevices:withPassword:withCallbackQueue:block:;
- (unsigned int)type;
- (void)addOutputDevices:initiator:withCallbackQueue:block:;
- (void).cxx_destruct;
- (id)initWithUID:;
- (void)setOutputDevices:initiator:withCallbackQueue:block:;
@end
