@interface SASettingOpenBluetooth : SASettingOpenSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openBluetooth;
+ (id)openBluetoothWithDictionary:context:;
@end
