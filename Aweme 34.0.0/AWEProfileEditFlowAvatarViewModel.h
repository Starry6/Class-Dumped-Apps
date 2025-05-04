@interface AWEProfileEditFlowAvatarViewModel : AWEProfileEditFlowStepViewModel
@property (nonatomic) UIImage chosenImage;
@property (nonatomic) NSString chosenImageURI;
@property (nonatomic) BOOL uploadingImage;
@property (nonatomic) BOOL enablePublishAsStory;
@property (nonatomic) NSString title;
- (BOOL)uploadingImage;
- (void)setUploadingImage:;
- (void)chooseImage;
- (id)chosenImage;
- (BOOL)enablePublishAsStory;
- (void)setEnablePublishAsStory:;
- (void)p_trackGuideProfilePhotoWithEventType:;
- (id)chosenImageURI;
- (void)p_trackReplaceProfilePhoto;
- (void)setChosenImageURI:;
- (void)setChosenImage:;
- (void)p_trackSaveProfilePhoto;
- (id)trackFlowType;
- (void)trackEditAvatarPageSwitch:;
- (void)trackImpression;
- (Class)stepViewClass;
- (id)impressionEvent;
- (void)finishWithCompletion:;
- (id)init;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
