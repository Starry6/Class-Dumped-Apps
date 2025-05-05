@interface AWEIMPhotoBrowserService : NSObject
@property (nonatomic) AWEIMPhotoPickerModel pickerModel;
@property (nonatomic) @? completionBlock;
@property (nonatomic) AWEIMPhotoAlbumLoader albumLoader;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAlbumLoader:;
- (void)setPickerModel:;
- (id)albumLoader;
- (BOOL)isGif:;
- (void)onPhotoPickerViewControllerDeselectIdentifier:;
- (void)onPhotoPickerViewControllerSelectIdentifier:asset:;
- (void)photoPickerViewControllerCancelPickAsset:;
- (void)photoPickerViewControllerFinishPickAsset:;
- (id)pickerModel;
- (void)setCompletionBlock:;
- (void).cxx_destruct;
- (id)completionBlock;
+ (void)photoBrowserWithMaxCount:viewController:completion:;
+ (id)shareInstance;
@end
