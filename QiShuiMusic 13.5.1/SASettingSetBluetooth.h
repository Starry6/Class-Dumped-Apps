@interface SASettingSetBluetooth : SASettingSetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)setBluetooth;
+ (id)setBluetoothWithDictionary:context:;
@end
