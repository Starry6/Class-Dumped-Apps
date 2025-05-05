@interface STUserDeviceState : STUniquedManagedObject
@property (nonatomic) BOOL screenTimeEnabled;
@property (nonatomic) BOOL cloudSyncEnabled;
@property (nonatomic) BOOL managementEnabled;
@property (nonatomic) NSString passcodeOwner;
@property (nonatomic) NSString coreDuetIdentifier;
@property (nonatomic) NSData capabilitiesPlist;
@property (nonatomic) NSData deviceInfoPlist;
@property (nonatomic) STCoreUser localUser;
@property (nonatomic) STCoreDevice localDevice;
@property (nonatomic) STCoreUser user;
@property (nonatomic) STCoreDevice device;
@property (nonatomic) NSSet installedApps;
@property (nonatomic) NSDate lastFamilyCheckinDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)computeUniqueIdentifier;
- (BOOL)updateWithDictionaryRepresentation:;
- (void)didChangeValueForKey:;
- (id)dictionaryRepresentation;
+ (id)fetchRequestMatchingLocalUserDeviceState;
+ (id)fetchOrCreateWithDictionaryRepresentation:inContext:error:;
+ (id)fetchOrCreateLocalUserDeviceStateInContext:error:;
+ (id)serializableClassName;
+ (id)fetchLocalUserDeviceStateInContext:error:;
@end
