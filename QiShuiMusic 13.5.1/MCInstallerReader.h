@interface MCInstallerReader : NSObject
- (id)pathsToInstalledProfilesWithFilterFlags:;
+ (id)sharedReader;
+ (void)_setSystemProfileStorageDirectory:userProfileStorageDirectory:;
@end
