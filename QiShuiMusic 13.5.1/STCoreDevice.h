@interface STCoreDevice : NSManagedObject
@property (nonatomic) NSSet userDeviceAddresses;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString name;
@property (nonatomic) s platform;
@property (nonatomic) STUserDeviceState localUserDeviceState;
@property (nonatomic) NSSet userDeviceStates;
@property (nonatomic) NSSet usages;
@property (nonatomic) <STSerializableManagedObject> syncableRootObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)syncableRootObject;
+ (id)fetchOrCreateDeviceWithIdentifier:inContext:error:;
+ (id)fetchRequestForOrphanedDevices;
+ (id)fetchDeviceWithIdentifier:inContext:error:;
+ (id)fetchOrCreateLocalDeviceInContext:error:;
@end
