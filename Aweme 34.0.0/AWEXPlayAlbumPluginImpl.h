@interface AWEXPlayAlbumPluginImpl : NSObject
@property (nonatomic) AWEXPlayImagePickerPresenter imagePresenter;
@property (nonatomic) DUXLoadingToast loadingToast;
@property (nonatomic) DUXAlertDialog alertDialog;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)xplay_albumCapturePhotoWithAlbumCertToken:videoCertToken:completion:;
- (void)xplay_albumPickPhotoWithCertToken:completion:;
- (void)xplay_albumSavePhotoWithCertToken:image:completion:;
- (void)xplay_albumUploadStatus:;
- (void)xplay_albumDownloadStatus:;
- (void)xplay_albumShowSavePhotoAlert:;
- (void)xplay_albumShowSharePhotoAlert:;
- (void)xplay_albumSharePhoto:;
- (id)loadingToast;
- (void)setLoadingToast:;
- (void)setAlertDialog:;
- (id)alertDialog;
- (void)setImagePresenter:;
- (id)imagePresenter;
- (void).cxx_destruct;
+ (id)sharedPlugin;
+ (void)_aweLazyRegisterStaticLoad;
@end
