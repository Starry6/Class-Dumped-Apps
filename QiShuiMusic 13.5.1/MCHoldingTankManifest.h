@interface MCHoldingTankManifest : NSObject
- (id)init;
- (void)dealloc;
- (void)removeProfileDataWithIdentifier:fromHoldingTankForDevice:;
- (id)_manifestForDevice:createIfNil:;
- (BOOL)addProfileData:withIdentifier:toHoldingTankForDevice:outError:;
- (id)pathToHoldingTankProfileDataForIdentifier:targetDevice:createDirectory:;
- (id)_pathToHoldingTankManifestForDevice:;
- (id)uninstalledProfileDataWithIdentifier:targetDevice:;
- (id)uninstalledProfileIdentifiersForDevice:;
- (id)uninstalledProfileWithIdentifier:targetDevice:;
- (BOOL)_adjustManifestForDevice:withIdentifier:addingIdentifer:outError:;
- (void)_createDirectory:withIntermediateDirectories:;
- (id)_profileDataFileNameForProfileIdentifier:;
- (void).cxx_destruct;
- (id)_pathToHoldingTankDirectoryForDevice:;
+ (id)sharedManifest;
@end
