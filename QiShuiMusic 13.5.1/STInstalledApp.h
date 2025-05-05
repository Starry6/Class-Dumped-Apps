@interface STInstalledApp : STUniquedManagedObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) STUserDeviceState userDeviceState;
@property (nonatomic) BOOL installedLocally;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSData iconData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)computeUniqueIdentifier;
- (BOOL)updateWithDictionaryRepresentation:;
- (void)didChangeValueForKey:;
- (id)dictionaryRepresentation;
- (void)setUserDeviceState:;
+ (id)fetchOrCreateWithDictionaryRepresentation:inContext:error:;
+ (id)serializableClassName;
+ (id)bundleIdentifiersInstalledForDSID:inContext:error:;
@end
