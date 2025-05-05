@interface MSUDataAccessor : NSObject
- (id)init;
- (id)copyBootManifestHashWithError:;
- (id)personalizedRootWithError:;
- (id)copyPathForPersonalizedData:error:;
- (id)resolveFilePathForEntry:error:;
- (id)copyPathForPersistentData:error:;
- (id)copyMountPointForVolumeType:error:;
- (id)hardwareRootWithError:;
+ (id)bootUUIDWithError:;
+ (id)errorNameForCode:;
+ (void)buildErrorForRef:code:description:;
+ (id)ioreg:property:error:;
+ (id)sharedDataAccessor;
+ (unsigned long long)cryptex1TicketType;
+ (id)hardwareModelWithError:;
@end
