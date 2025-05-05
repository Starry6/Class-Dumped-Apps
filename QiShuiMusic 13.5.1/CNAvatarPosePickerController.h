@interface CNAvatarPosePickerController : NSObject
@property (nonatomic) CNPhotoPickerVariantsManager variantsManager;
@property (nonatomic) CNPhotoPickerAnimojiProviderItem originalProviderItem;
@property (nonatomic) CNPhotoPickerVariantListController posePickerController;
@property (nonatomic) <CNAvatarPosePickerControllerDelegate> delegate;
@property (nonatomic) q numberOfItemsPerRow;
@property (nonatomic) {CGSize=dd} desiredContentSize;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)desiredContentSize;
- (void)photoPickerVariantListController:didSelectProviderItem:;
- (void)photoPickerVariantListControllerDidCancel:;
- (id)initWithAvatarRecord:variantsManager:;
- (id)variantsManager;
- (void)setVariantsManager:;
- (long long)numberOfItemsPerRow;
- (id)posePickerController;
- (void)setPosePickerController:;
- (id)initWithAnimojiProviderItem:variantsManager:;
- (void)setNumberOfItemsPerRow:;
- (void)setDesiredContentSize:;
- (id)posePickerViewController;
- (id)originalProviderItem;
- (void)setOriginalProviderItem:;
@end
