@interface IESLiveSaaSGetPictureHandler : NSObject
@property (nonatomic) <IESLiveSaaSPhotoLibraryProtocol> photoService;
- (id)photoService;
- (void)setPhotoService:;
- (void)showImagePickerWithPrivacyCert:withCompletion:;
- (id)init;
- (void).cxx_destruct;
@end
