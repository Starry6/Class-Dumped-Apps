@interface SADeviceControlRebootDevice : SABaseClientBoundCommand
@property (nonatomic) BOOL isShutdownOnly;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)isShutdownOnly;
- (void)setIsShutdownOnly:;
+ (id)rebootDevice;
+ (id)rebootDeviceWithDictionary:context:;
@end
