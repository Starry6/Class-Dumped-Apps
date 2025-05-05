@interface SASettingGetBluetooth : SASettingGetBool
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
+ (id)getBluetooth;
+ (id)getBluetoothWithDictionary:context:;
@end
