@interface SADPDeviceSearchCompleted : SABaseCommand
@property (nonatomic) BOOL remotePlaySoundRestricted;
@property (nonatomic) NSArray resolvedDevices;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)remotePlaySoundRestricted;
- (void)setRemotePlaySoundRestricted:;
- (id)resolvedDevices;
- (void)setResolvedDevices:;
+ (id)deviceSearchCompleted;
+ (id)deviceSearchCompletedWithDictionary:context:;
@end
