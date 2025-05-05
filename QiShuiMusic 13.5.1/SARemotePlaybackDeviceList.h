@interface SARemotePlaybackDeviceList : SADomainObject
@property (nonatomic) NSArray remotePlaybackDevices;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)remotePlaybackDevices;
- (void)setRemotePlaybackDevices:;
+ (id)remotePlaybackDeviceList;
+ (id)remotePlaybackDeviceListWithDictionary:context:;
@end
