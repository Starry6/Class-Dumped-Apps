@interface BLEMIDIAccessor : NSObject
+ (unsigned int)midiDeviceForUUID:;
+ (unsigned int)midiDeviceForUUID:isLocalPeripheral:isRemotePeripheral:;
+ (unsigned int)nullDevice;
+ (unsigned int)localPeripheral;
+ (id)localPeripheralName;
+ (id)uuidForMIDIDevice:;
+ (id)nameForMIDIDevice:;
+ (BOOL)deviceIsRemotePeripheral:;
+ (BOOL)deviceIsLocalPeripheral:;
+ (BOOL)deviceIsNullDevice:;
+ (BOOL)deviceIsOnline:;
+ (BOOL)uuidIsForgettable:;
+ (unsigned short)timeStampOffset:;
+ (unsigned short)reconstructWithHighByte:lowByte:overflow:;
+ (unsigned long long)timeStampWithEpoch:offset:;
+ (void)splitOffset:intoHeaderByte:timeStampByte:;
+ (void)logEvent:length:timeStamp:intoBuffer:;
@end
