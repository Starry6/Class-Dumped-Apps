@interface AWECloudAlbumServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)cloudAlbumSwitch;
- (void)pauseUploadTask:completion:;
- (void)resumeUploadTask:completion:;
- (void)removeAssetsAlbumId:assetIds:completion:;
- (void)uploadAssetsWithAlbumID:assetModels:completion:;
- (BOOL)checkValidForAssets:availableSpace:error:;
- (id)copyOriginSandboxAssetPath:;
- (id)importModelWithACCModel:;
- (void)trackAddAssetFor:assetIDs:step:error:;
- (long long)calculateAssetsSize:;
- (BOOL)verifyVideoLength:;
- (long long)calculatePHAssetsSize:;
- (long long)calculateSandboxAssetsSize:;
- (id)cloudAlbumTempUploadFile:;
- (BOOL)cloudAlbumABEnable;
- (BOOL)cloudAlbumEmergencySwitch;
- (void)checkAuthorization:;
- (void)uploadCameraAlbumWithAssets:completion:;
- (void)removeCameraAlbumAssetIds:completion:;
@end
