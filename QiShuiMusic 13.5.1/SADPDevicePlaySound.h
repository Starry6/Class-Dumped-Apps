@interface SADPDevicePlaySound : SABaseClientBoundCommand
@property (nonatomic) NSString action;
@property (nonatomic) NSArray devices;
- (void)setDevices:;
- (id)groupIdentifier;
- (id)devices;
- (id)action;
- (BOOL)requiresResponse;
- (void)setAction:;
- (id)encodedClassName;
+ (id)devicePlaySound;
+ (id)devicePlaySoundWithDictionary:context:;
@end
