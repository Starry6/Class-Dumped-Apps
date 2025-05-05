@interface SASetRemoteDevices : SABaseCommand
@property (nonatomic) BOOL remoteDeviceHasNoAssistantId;
@property (nonatomic) BOOL remoteDeviceNotSetup;
@property (nonatomic) BOOL remoteDeviceUnreachable;
@property (nonatomic) NSArray remoteDevices;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)remoteDevices;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setRemoteDevices:;
- (BOOL)remoteDeviceHasNoAssistantId;
- (void)setRemoteDeviceHasNoAssistantId:;
- (BOOL)remoteDeviceNotSetup;
- (void)setRemoteDeviceNotSetup:;
- (BOOL)remoteDeviceUnreachable;
- (void)setRemoteDeviceUnreachable:;
+ (id)setRemoteDevices;
+ (id)setRemoteDevicesWithDictionary:context:;
@end
