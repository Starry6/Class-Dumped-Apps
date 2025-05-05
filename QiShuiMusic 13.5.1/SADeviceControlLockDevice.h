@interface SADeviceControlLockDevice : SABaseClientBoundCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)lockDevice;
+ (id)lockDeviceWithDictionary:context:;
@end
