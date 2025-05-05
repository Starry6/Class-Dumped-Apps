@interface STUserDeviceAddress : NSManagedObject
@property (nonatomic) NSString idsURI;
@property (nonatomic) STCoreUser user;
@property (nonatomic) STCoreDevice device;
+ (id)fetchOrCreateUserDeviceAddressWithUser:device:context:error:;
@end
