@interface AWECloudAlbumNetworkHelper : NSObject
+ (void)setUserCloudAlbumUploadAuthoriaztion:completion:;
+ (void)refreshUserCloudAlbumToken:;
+ (void)setUserCloudAlbumSwitch:completion:;
+ (void)requestCloudAlbumLocalAlbumEnterState:;
+ (void)requestPastMemoriesWithType:cursor:count:completion:;
+ (void)requestPastMemoriesMaterialWithEntrance:completion:;
+ (void)uploadMemoriesAlbumScanResult:newInstalled:completion:;
+ (void)exitThemes:completion:;
@end
