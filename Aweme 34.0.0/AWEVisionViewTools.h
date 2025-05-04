@interface AWEVisionViewTools : NSObject
- (void)showAlbumAuthorityAlert;
- (void)openSystemSetting;
- (void)checkAlbumAuthority:requestIfNeed:;
- (void)checkCameraAuthority:requestIfNeed:;
- (void)openMyDYCodePageWithTrackParams:;
- (void)fetchLatestAlbumPhoto:;
- (void)showAlbumAuthorityAlertImp;
- (void)openSystemSettingImp;
- (void)fetchLatestAlbumPhotoImp:;
- (id)init;
@end
