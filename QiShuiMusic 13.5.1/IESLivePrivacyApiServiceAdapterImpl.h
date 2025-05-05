@interface IESLivePrivacyApiServiceAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)IESLivePrivacyCert:;
- (void)checkPhotoLibraryPermissionWithCert:context:accessLevel:completionBlock:;
- (void)checkPhotoLibraryPermissionWithCert:context:options:completionBlock:;
- (id)createHybridCertWithToken:context:;
- (BOOL)enableUserPrivacyApiWithPrivacyCert:;
- (BOOL)openURL:withCert:error:;
- (int)requestAVAssetForVideo:options:resultHandler:cert:error:;
- (void)requestAccessCameraWithPrivacyCert:completionHandler:;
- (void)requestAccessMicrophoneWithPrivacyCert:completionHandler:;
- (int)requestImageForAsset:targetSize:contentMode:options:resultHandler:cert:error:;
- (void)requestPhotoAlbumAuthorizationWithCert:context:accessLevel:completionHandler:;
- (void)requestPhotoAlbumAuthorizationWithCert:context:completionHandler:;
- (void)requestRecordPermission:audioSession:privacyCert:;
- (void)startRunningWithCaptureSession:privacyCert:error:;
- (void)stopRunningWithCaptureSession:privacyCert:error:;
+ (BOOL)liveBpeaSwitch;
@end
